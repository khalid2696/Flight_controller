//classbased data receiver for arduino mega Code.
class dataClass
{
  public:
  int a;
  float b;
};

dataClass receivingData;
char buf[sizeof(receivingData)]; 
int receiver();
int packBytes();

void setup() {
Serial1.begin(9600);
Serial.begin(9600);
}

void loop()
{
      while(Serial1.available()>0)
      {        receiver();      }
      delay(50);
}

int packBytes()
{
      memcpy(&receivingData,  buf, sizeof receivingData);
}

int receiver()
{
  if(Serial1.read()==0)//check 1st byte
          {
                  if(Serial1.read()==0)// check 2nd byte
                    {
                      //NOW We are getting the actual data
                      //We have to put this into buf buffer
                      Serial1.readBytes(buf,sizeof receivingData);
                      packBytes();
                      Serial.println("mission success\n");
                      Serial.println(receivingData.b);
                    }
                   else { Serial.println("1");
                            return 0;}
          }
    else {Serial.println("2");
               return 0;}
    
}

