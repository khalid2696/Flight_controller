                                                                                                                                                                                                                                                                                                                                                                                                                                                            //classbased data transmitter for arduino mega Code.
class dataClass
{
  public:
  int a=2;
  float b=20;
  char tangi[]="mewmewmew";
};

dataClass sendingData;
char buf[sizeof(sendingData)]; 
int transmitter();
int packBytes();

void setup()     {    Serial.begin(9600);   }

void loop()       {    transmitter();
                            delay(50);                }


int transmitter()
{     Serial.write(0);
      Serial.write(0);        //To mark the beginning of transmission
      packBytes();
      Serial.write(buf,    sizeof(sendingData));
      return 0;
}

int packBytes()
{
      memcpy(buf, &sendingData, sizeof sendingData);
}

