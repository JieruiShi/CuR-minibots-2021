//www.elegoo.com
//2018.12.19
#include <Servo.h>
Servo myservo;

void setup(){
  myservo.attach(5);
  myservo.write(90);// move servos to center position -> 90°
  
} 
void loop(){
  myservo.write(0);// move servos to center position -> 90°
  delay(500);
  myservo.write(180);
  delay(500000);
}