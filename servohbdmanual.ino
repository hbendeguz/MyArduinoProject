#include <Servo.h>

Servo myServo;

const int manual = 0;
  const int potmeter = A0;
  int val;
  const int buttonPin =2;
  int buttonState = 0; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(9);
   myServo.write(0);
  pinMode(buttonPin, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
if (buttonState == 0) {
  val = analogRead(potmeter);
  val = map(val, 0,1023, 0, 180);
  Serial.println(val);
  myServo.write(val);
  //delay(1000);
}
else{
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
  }}
}
