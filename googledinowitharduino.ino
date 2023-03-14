#include <Servo.h>
Servo myservo;
int deger;
int ldrPin = A0;
int servoPin = 8;
int ldrEsikDegeri = 310;
/*LDR'nizin, oyunda engelleri algılayabilmesi için eşik değerini
kendinize göre değiştirebilirsiniz.*/

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
