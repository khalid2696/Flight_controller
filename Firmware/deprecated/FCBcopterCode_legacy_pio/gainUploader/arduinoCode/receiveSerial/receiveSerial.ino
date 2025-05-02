void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  Serial.setTimeout(1);
}
#define N 9// no of gains
float gainArray[N] = {0.0};
bool flag = false;

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    if (Serial.read() == '#')
    {
      //Start byte detected
      Serial.println(1);
      while (!Serial.available());
      
        Serial.println(0);
        if (Serial.parseInt() == 1)
        { Serial.println(2);
          //write command detected
          for (int i = 0; i < N; i++)
          {
            gainArray[i] = Serial.parseFloat();
            Serial.println(3);
            flag = true;
          }
        }
      
    }
  }
  if (flag == true)
  {
    for (int i = 0; i < N; i++)
    {
      Serial.println(gainArray[i]);
    }
    flag = false;
  }
}
