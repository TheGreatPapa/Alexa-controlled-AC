#include <Arduino.h>

const byte RED_LED = 25;
const byte GREEN_LED = 33;
const byte BLUE_LED = 32;




void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED, HIGH);
  delay(200);
  digitalWrite(RED_LED, LOW);
  delay(200);
  digitalWrite(GREEN_LED, HIGH);
  delay(200);
  digitalWrite(GREEN_LED, LOW);
  delay(200);
  digitalWrite(BLUE_LED, HIGH);
  delay(200);
  digitalWrite(BLUE_LED, LOW);
  delay(200);
  
}

