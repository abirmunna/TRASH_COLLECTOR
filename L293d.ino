#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int bt;
void setup()
{
  Serial.begin(9600);


}


void loop() {
   int bt = Serial.read();
   Serial.println(bt);
   delay(500);

}
