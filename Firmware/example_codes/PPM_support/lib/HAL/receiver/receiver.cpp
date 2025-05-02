
 #include "receiver.h"
void ppm_receiver_8ch::receiverISR() //Interrupt service routine
{
        long deltaTime =  mbd_timer.read_us();
        mbd_timer.reset();
        if (deltaTime > 5000)
        {
                //Start of ppm signal detected!
                marker = 0;
                return;
        }

        if (marker >= 0 && marker <= 7) {
                //read the signal
                input_signal[marker] = deltaTime; //Pulse width in MicroS
                marker++;
                return;

        }
        return;
}

ppm_receiver_8ch::ppm_receiver_8ch()  :rx_interrupt(RX_INTERRUPT_PIN)
{
        mbd_timer.start();
        rx_interrupt.fall(this,&ppm_receiver_8ch::receiverISR);
        //enableInterrupt(ARDUINOPIN, receiverISR, FALLING);
}
