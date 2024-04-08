#include <Servo.h>
const int switchPin = 8;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  myservo.attach(10);
  myservo.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin) == HIGH){
    myservo.write(180);
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    myservo.write(0);
    digitalWrite(LED_BUILTIN, LOW);
  }

}
