#include <Servo.h>

#define POT A5

Servo servo_1;
int angle_servo_1;

Servo servo_2;
int angle_servo_2;

  
void setup()
{
  servo_1.attach(2);
  angle_servo_1 = 0;
  servo_1.write(angle_servo_1);
  
  servo_2.attach(4);
  angle_servo_2 = 0;
  servo_2.write(angle_servo_2);
}

void loop()
{
  angle_servo_1 = map(analogRead(POT), 0, 1023, 0, 180);
  servo_1.write(angle_servo_1);
  delay(50);
  
  servo_2.write(90);
  delay(1000);
  servo_2.write(0);
  delay(600);
  servo_2.write(180);
  delay(1000);
  
}