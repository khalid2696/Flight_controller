/* mbed R/C Futaba SBUS Library
 * Copyright (c) 2011-2012 digixx
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "FutabaSBUS.h"
#include "MODSERIAL.h"
#include "mbed.h"

//debug only
DigitalOut tst1(p8);
DigitalOut tst2(p9);
DigitalOut tst3(p10);

uint8_t sbus_data[25] = {0x0f,0x01,0x04,0x20,0x00,0xff,0x07,0x40,0x00,0x02,0x10,0x80,0x2c,0x64,0x21,0x0b,0x59,0x08,0x40,0x00,0x02,0x10,0x80,0x00,0x00};
int16_t channels[18]  = {1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,0,0};
int16_t servos[18]    = {1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,1023,0,0};
uint8_t  failsafe_status = SBUS_SIGNAL_FAILSAFE;
bool sbus_passthrough = true;


FutabaSBUS::FutabaSBUS(PinName tx, PinName rx) : sbus_(tx, rx) {
    // Set Baudrate
    sbus_.baud(100000);
    // Set Datalenght & Frame
    sbus_.format(8, Serial::Even, 2);
    // Attach interrupt routines
    sbus_.attach(this, &FutabaSBUS::SBUS_irq_rx, MODSERIAL::RxIrq);
    // init ticker 500us
    rxSBUS.attach_us(this, &FutabaSBUS::rx_ticker_500us,500);
    rx_timeout=50;
    tx_timeout=60;
}

int16_t FutabaSBUS::channel(uint8_t ch) {
    // Read channel data
    if ((ch>0)&&(ch<=16)){
        return channels[ch-1];
    }else{
        return 1023;
    }
}

uint8_t FutabaSBUS::digichannel(uint8_t ch) {
    // Read digital channel data
    if ((ch>0) && (ch<=2)) {
        return channels[15+ch];
    }else{
        return 0;
    }
}

void FutabaSBUS::servo(uint8_t ch, int16_t position) {
    // Set servo position
    if ((ch>0)&&(ch<=16)) {
        if (position>2048) {position=2048;}
        servos[ch-1] = position;
    }
}

void FutabaSBUS::digiservo(uint8_t ch, uint8_t position) {
    // Set digital servo position
    if ((ch>0) && (ch<=2)) {
        if (position>1) {position=1;}
        servos[15+ch] = position;
    }
}

uint8_t FutabaSBUS::failsafe(void) {return failsafe_status;}

void FutabaSBUS::passthrough(bool mode) {
    // Set passtrough mode, if true, received channel data is send to servos
    sbus_passthrough = mode;
}

bool FutabaSBUS::passthrough(void) {
    // Return current passthrough mode
    return sbus_passthrough;
}

/****************************************************************/
/****************************************************************/

void FutabaSBUS::SBUS_irq_rx(MODSERIAL_IRQ_INFO *q) {
    rx_timeout=2;
    tx_timeout=4;
}

void FutabaSBUS::update_channels(void) {
    // Read all received data and calculate channel data
    uint8_t i;
    uint8_t sbus_pointer = 0;
    while (sbus_.readable()) {
        uint8_t data = sbus_.getc(); // get data from serial rx buffer
        switch (sbus_pointer) {
            case 0: // Byte 1
                if (data==0x0f) {
                    sbus_data[sbus_pointer] = data;
                    sbus_pointer++;
                }
                break;

            case 24:    // Byte 25 >> if last byte == 0x00 >> convert data
                if (data==0x00) {
                    sbus_data[sbus_pointer] = data;
                    // clear channels[]
                    for (i=0; i<16; i++) {channels[i] = 0;}

                    // reset counters
                    uint8_t byte_in_sbus = 1;
                    uint8_t bit_in_sbus = 0;
                    uint8_t ch = 0;
                    uint8_t bit_in_channel = 0;

                    // process actual sbus data
                    for (i=0; i<176; i++) {
                        if (sbus_data[byte_in_sbus] & (1<<bit_in_sbus)) {
                            channels[ch] |= (1<<bit_in_channel);
                        }
                        bit_in_sbus++;
                        bit_in_channel++;

                        if (bit_in_sbus == 8) {
                            bit_in_sbus =0;
                            byte_in_sbus++;
                        }
                        if (bit_in_channel == 11) {
                            bit_in_channel =0;
                            ch++;
                        }
                    }
                    // DigiChannel 1
                    if (sbus_data[23] & (1<<0)) {
                        channels[16] = 1;
                    }else{
                        channels[16] = 0;
                    }
                    // DigiChannel 2
                    if (sbus_data[23] & (1<<1)) {
                        channels[17] = 1;
                    }else{
                        channels[17] = 0;
                    }
                    // Failsafe
                    failsafe_status = SBUS_SIGNAL_OK;
                    if (sbus_data[23] & (1<<2)) {
                        failsafe_status = SBUS_SIGNAL_LOST;
                    }
                    if (sbus_data[23] & (1<<3)) {
                        failsafe_status = SBUS_SIGNAL_FAILSAFE;
                    }
                }
                break;

            default:  // collect Channel data (11bit) / Failsafe information
                sbus_data[sbus_pointer] = data;
                sbus_pointer++;
        }
    }
}

void FutabaSBUS::update_servos(void) {
    // Send data to servos
    // Passtrough mode = false >> send own servo data
    // Passtrough mode = true >> send received channel data
    uint8_t i;
    if (!sbus_passthrough) {
        // clear received channel data
        for (i=1; i<24; i++) {
            sbus_data[i] = 0;
        }
    
        // reset counters
        uint8_t ch = 0;
        uint8_t bit_in_servo = 0;
        uint8_t byte_in_sbus = 1;
        uint8_t bit_in_sbus = 0;
        
        // store servo data
        for (i=0; i<176; i++) {
            if (servos[ch] & (1<<bit_in_servo)) {
                sbus_data[byte_in_sbus] |= (1<<bit_in_sbus);
            }
            bit_in_sbus++;
            bit_in_servo++;

            if (bit_in_sbus == 8) {
                bit_in_sbus =0;
                byte_in_sbus++;
            }
            if (bit_in_servo == 11) {
                bit_in_servo =0;
                ch++;
            }
        }
    
        // DigiChannel 1
        if (channels[16] == 1) {
            sbus_data[23] |= (1<<0);
        }
        // DigiChannel 2
        if (channels[17] == 1) {
            sbus_data[23] |= (1<<1);
        }        
        
        // Failsafe
        if (failsafe_status == SBUS_SIGNAL_LOST) {
            sbus_data[23] |= (1<<2);
        }
        
        if (failsafe_status == SBUS_SIGNAL_FAILSAFE) {
            sbus_data[23] |= (1<<2);
            sbus_data[23] |= (1<<3);
        }
    }
    // send data out
    for (i=0;i<25;i++) {
        sbus_.putc(sbus_data[i]);
    }
}

void FutabaSBUS::rx_ticker_500us(void) {
    // RX
    switch (rx_timeout) {
        case 0:
            break;
        case 1:
            if (sbus_.readable()) {update_channels();}
        default:
            rx_timeout--;
    }
    // TX
    switch (tx_timeout) {
        case 0:
            update_servos();
            tx_timeout = 28;
        default:
            tx_timeout--;
    }
}
