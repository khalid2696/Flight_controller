
#include "mbed.h"
#include "BufferedSerial.h"
#include "vector"

void loop();

class serial_comm_interface
{
  //This code should not
public:
  //Variables take more than 5ms in any case!!!
  int NoOfIntegars; //To be received
  vector <int32_t> received_integars;
  vector <int32_t>lowerLimit; //lower limit array
  vector <int32_t>upperLimit; //upper limit array for data

  // int tx_pin; //PC_6  = 0x26, but stored as integar
  // int rx_pin; //Hex code for PC_7  = 0x27,
  PinName tx_pin; //PC_6  = 0x26, but stored as integar
  PinName rx_pin; //Hex code for PC_7  = 0x27,// Pin Name is a datatype enum holding pin number

  char startByte = 0x05; //these should not occur in normal transmission
  char endByte = 0x11;
  //char separator = '\n'; done by default
  BufferedSerial device;
  //Functions
  serial_comm_interface(PinName, PinName, int); //constructor
  int serial_receive();
  int convert_to_int();
  int verify();
};

serial_comm_interface::serial_comm_interface(PinName tx, PinName rx, int NoOfint):
   rx_pin(rx),
   tx_pin(tx),
   device(tx,rx),
   NoOfIntegars(NoOfint)
  {
    device.baud(115200); //setting default baud rate
  }
int serial_comm_interface::serial_receive()
  {
    ;
  }
int serial_comm_interface::convert_to_int()
  {
    ;
  }
int serial_comm_interface::verify()
  {
    ;
  }
serial_comm_interface pozyx(PC_6, PC_7, 3);


Serial PC(USBTX, USBRX);
int main()
{
//serial_comm_interface pozyx(PC_6, PC_7, 4);
int32_t lowerLimit[3] = {0, 0, -1};
int32_t upperLimit[3] = {10, 10, 45};
PC.baud(57600);
//setting limits
for(int i = 0; i<3 ; i++)
{
  pozyx.lowerLimit[i] = lowerLimit[i];
  pozyx.upperLimit[i] = upperLimit[i];
}

while(1) {loop(); wait(0.1);}
return 0;
}
int readSerial();

char string[30]={0};
int32_t a = 0 ,b = 0,c = 0;
void loop()
{

  int stringLen = readSerial();
  int requiredStrLen = pozyx.NoOfIntegars*3 + pozyx.NoOfIntegars; //no of bytes needed(with separator)
  PC.printf("%d - %d\n",stringLen, requiredStrLen );
  //if(stringLen == requiredStrLen) only for the biggest numbers that condition will be satisfied
  {
    //Data received is of expected size
    sscanf(string, "%d\n%d\n%d\n", &a,&b,&c);
  }
  PC.printf("%d - %d - %d\n", a, b, c);

}


int readSerial()
{
    int index = 0;
    PC.printf("0 ");
     while(pozyx.device.readable())
     {
       PC.printf("1 ");
       if(pozyx.device.getc() == pozyx.startByte )
         {
           PC.printf("2 ");
           //Clear the entire string. so as to be sure of rubbing old data
           memset(string,0,sizeof(string));
           while(pozyx.device.readable())
           {
             PC.printf("3 ");
             char c = pozyx.device.getc();
             if(c == pozyx.endByte) {
                                      //clear the remaining buffer
                                      PC.printf("4 \n");
                                      string[index+1] = '\n';//append an end byte
                                      while (pozyx.device.readable()){ pozyx.device.getc(); }
                                      return index;
                                    }
             else { PC.printf("5 ");
                    string[index] = c;
                  }

             index++;
           }
         }
     }
}
