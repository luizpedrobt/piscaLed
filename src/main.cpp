#include <Arduino.h>
#include "inindThread.h"

#define PIN_LED 13
#define PUSH_BUTTOM 7

// void piscaLed() {

//   digitalWrite(PIN_LED, !digitalRead(PIN_LED));
// }

bool readButtom() {
  return digitalRead(PUSH_BUTTOM);
}

void setup() {

  pinMode(PIN_LED, OUTPUT);
  pinMode(PUSH_BUTTOM, INPUT);
  
}

void loop() {

  if(readButtom() == HIGH) digitalWrite(PIN_LED, (uint8_t) readButtom());
  else digitalWrite(PIN_LED, (uint8_t) readButtom());

  delay(500);
}
 