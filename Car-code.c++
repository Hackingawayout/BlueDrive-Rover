#include<AFMotor.h>
AF_DCMotor motor1(1,MOTOR12_1KHZ)
AF_DCMotor motor2(2,MOTOR12_1KHZ)
AF_DCMotor motor3(3,MOTOR12_1KHZ)
AF_DCMotor motor4(4,MOTOR12_1KHZ)

char command;

void setup()
{
    Serial.begin(9600);
}
void loop()
{
  If (Serial.available()>0)
  {
      command = Serial.read();
      stop();
      switch(command)
      {
        Case ‘F’:
            Forward();
           Break;
        Case ‘B’:
            back();
           Break;
         Case ‘L’:
            left();
           Break;
         Case ‘R’:
            right();
           break;
       }
   }
}
Void forward()
{
   motor1.setSpeed (255);
   motor1.run (FORWARD)
   motor2.setSpeed (255);
   motor2.run (FORWARD)
   motor3.setSpeed (255);
   motor3.run (FORWARD)
   motor4.setSpeed (255);
   motor4.run (FORWARD)
}

Void back()
{
   motor1.setSpeed (255);
   motor1.run (BACKWARD)
   motor2.setSpeed (255);
   motor2.run (BACKWARD)
   motor3.setSpeed (255);
   motor3.run (BACKWARD)
   motor4.setSpeed (255);
   motor4.run (BACKWARD)
}

Void right()
{
   motor1.setSpeed (255);
   motor1.run (FORWARD)
   motor2.setSpeed (255);
   motor2.run (FORWARD)
   motor3.setSpeed (255);
   motor3.run (BACKWARD)
   motor4.setSpeed (255);
   motor4.run (BACKWARD)
} 
Void left()
{
   motor1.setSpeed (255);
   motor1.run (BACKWARD)
   motor2.setSpeed (255);
   motor2.run (BACKWARD)
   motor3.setSpeed (255);
   motor3.run (FORWARD)
   motor4.setSpeed (255);
   motor4.run (FORWARD)
}

Void stop()
{
   motor1.setSpeed (255);
   motor1.run (RELEASE)
   motor2.setSpeed (255);
   motor2.run (RELEASE)
   motor3.setSpeed (255);
   motor3.run (RELEASE)
   motor4.setSpeed (255);
   motor4.run (RELEASE)
}
