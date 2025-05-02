
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

int ppm_receiver_8ch::armingCheck()
{
  while (1)//Arming check
  {  if(input_signal[4-1]>1900 && input_signal[3-1]<1050 && input_signal[5-1]>1800 && input_signal[6-1]<1200)
      {        wait(1.0);
                if(input_signal[4-1]>1900 && input_signal[3-1]<1050 && \
                  input_signal[5-1]>1800 && input_signal[6-1]<1200)
                  {
                    wait(3.0);
                    if(input_signal[4-1]<1600)//check whether stick is released
                    {break;}
                  }
      }

  }
  return 0;
}

int ppm_receiver_8ch::stickCalibration()
{
  //doesnot move the transmitter sticks for godsake during this function execution
    centerSticks[0] = 0;
    centerSticks[1] = 0;
    centerSticks[2] = 0;
  for(int i=0; i<10;i++){
      centerSticks[0]+= input_signal[0];
      centerSticks[1]+= input_signal[1];
      centerSticks[2]+= input_signal[3];
      wait(0.1);
    }
    centerSticks[0]*= 0.1;
    centerSticks[1]*= 0.1;
    centerSticks[2]*= 0.1;
    return 0;
  }
