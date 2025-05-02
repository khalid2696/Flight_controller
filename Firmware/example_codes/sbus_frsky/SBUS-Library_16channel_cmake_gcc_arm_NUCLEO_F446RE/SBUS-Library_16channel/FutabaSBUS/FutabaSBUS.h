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


#ifndef MBED_FUTABA_SBUS_H
#define MBED_FUTABA_SBUS_H

#define SBUS_SIGNAL_OK          0x00
#define SBUS_SIGNAL_LOST        0x01
#define SBUS_SIGNAL_FAILSAFE    0x03

#include "MODSERIAL.h"
#include "mbed.h"

/** SBUS control class, based on MODSERIAL
 *
 * Example:
 * @code
 * // Continuously sweep the servo through it's full range
 * #include "FutabaSBUS.h"
 * #include "mbed.h"
 * 
 * FutabaSBUS sbus(p28, p27);
 * 
 * int main() {
 *     sbus.passthrough(false);
 *     while(1) {
 *         for(int i=0; i<100; i++) {
 *             sbus.servo(1) = i/100.0;
 *             wait(0.01);
 *         }
 *         for(int i=100; i>0; i--) {
 *             sbus.servo(1) = i/100.0;
 *             wait(0.01);
 *         }
 *     }
 * }
 * @endcode
 */

class FutabaSBUS {
public:
    /** create a FutabaSBUS object connected to the specified serial pins
    *
    * &param pin serial tx,rx to connect to
    */
    FutabaSBUS(PinName tx, PinName rx);
    
    /** Read channel(1..16), digital raw data
    *
    * &param raw data from receiver range from 0 to 4096, normal from 352 1696
    */
    int16_t channel(uint8_t ch);
    
    /** Read digital channel(1..2), range 0..1
    *
    * &param range 0..1
    */
    uint8_t digichannel(uint8_t ch);

    /** Set servo position, raw data, range 200..2000?
    *
    * &param raw data 0..2048
    */
    void servo(uint8_t ch, int16_t position);

    /** Set digital channel, 0..1
    *
    * &param range 0..1
    */
    void digiservo(uint8_t ch, uint8_t position);

    /** Read failsafe condition
    *
    * &param 0=no failsafe 1=lost signal 3=failsafe
    */
    uint8_t failsafe(void);

    /** Set logical data passtrough - servo values are ignored, using received data
    *
    * &param bool
    */
    void passthrough(bool mode);

    /** Read logical data passtrough
    *
    * &param bool
    */
    bool passthrough(void);

private:
    MODSERIAL sbus_;
    Ticker  rxSBUS;
    void SBUS_irq_rx(MODSERIAL_IRQ_INFO *q);
    void rx_ticker_500us(void);
    void update_channels(void);
    void update_servos(void);
    volatile int rx_timeout;
    volatile int tx_timeout;
};

#endif