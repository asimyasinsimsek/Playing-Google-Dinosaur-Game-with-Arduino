#include <Servo.h>
Servo myservo;
int ldrPin = A0;
int servoPin = 8;
int ldrEsikDegeri = 310;
/*you should change this value by trying it yourself*/

void setup()
{
  Serial.begin(9600);
  myservo.attach(servoPin);
}

void loop()
{
  myservo.write(30);
  Serial.println(  analogRead(ldrPin));
  if(analogRead(ldrPin) < ldrEsikDegeri)
  {
    myservo.write(0);
    delay(100);
  }
}                                                 
