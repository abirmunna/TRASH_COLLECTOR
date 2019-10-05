#include <Servo.h>
#define trigp 9
#define echop 10
float duration, distance;

Servo myservo;
int pos = 180;
void setup()
{
  myservo.attach(6);
  pinMode(trigp, OUTPUT);
  pinMode(echop, INPUT);
  Serial.begin(9600);
}
void loop()
{
  a:
  digitalWrite(trigp, LOW);
  delayMicroseconds(3);
  digitalWrite(trigp, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigp, LOW);
  duration = pulseIn(echop, HIGH);
  distance = (duration/2)/29.1;
  Serial.print("Distance: ");
  Serial.println(distance);
  myservo.write(180);
  if(distance>=2 && distance<=10)
  {
   for (pos = 180; pos >=60; pos -= 1) {
    // in steps of 1 degree
    myservo.write(pos);              
    delay(15);
   }
    delay(4000);
    goto a;
  }
  
}
