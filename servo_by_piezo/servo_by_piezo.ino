#include <Servo.h>

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
   myServo.write(0);
  
}

void loop() {
  // put your main code here, to run repeatedly:

 myServo.write(0);
 delay(2000);
 myServo.write(180);
  delay(2000);
  for (int k = 0; k<=180; k=k+30){
     myServo.write(k);
 delay(2000);

  
  }
  for (int k = 180; k>0; k=k-30){
     myServo.write(k);
 delay(2000);
  }
}
