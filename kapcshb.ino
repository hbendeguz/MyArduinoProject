const int buttonPin =2;
  int buttonState = 0; 
  int state = 0;
  int c = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
pinMode(buttonPin, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);

//Serial.println(buttonState);
//delay(1000);
c = c + buttonState;


  if (c % 2 ==0){
  Serial.println("manual");}
  else {
  Serial.println("auto");}


}
