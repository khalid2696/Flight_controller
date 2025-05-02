                                                                                                                                                                                                                                                                                                                                                                                                                                                            //classbased data transmitter for arduino mega Code.
class dataClass
{
  public:
  int a=2;
  float b=20;
};

dataClass sendingData;
char buf[sizeof(sendingData)]; 
int writtenBytes=0;
int transmitter();
int packBytes();

void setup() {
Serial1.begin(9600);
Serial.begin(9600);
}

void loop()
{
      if(Serial.available()>0) //Send data on command
      {
            Serial.read();  //clear command buffer
            transmitter();
            Serial.println("done");
      }
  delay(500);
}

int transmitter()
{     Serial1.write(0);
      Serial1.write(0);        //To mark the beginning of transmission
      packBytes();
      Serial1.write(buf,    sizeof(sendingData));
      return 0;
}

int packBytes()
{
      memcpy(buf, &sendingData, sizeof sendingData);
}

