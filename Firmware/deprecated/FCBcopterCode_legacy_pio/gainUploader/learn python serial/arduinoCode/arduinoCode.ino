//For sending packed serial data

void setup() {
  // put your setup code here, to run once:

Serial.begin(57600);
pinMode(13,OUTPUT);
digitalWrite(13,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println("potato");
//loopBack
if(Serial1.available()>0)
  {
    Serial.write(Serial1.read()); 
  }

}
