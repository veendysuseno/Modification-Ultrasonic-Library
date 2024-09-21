#include "Ultrasonic.h"
#include "Arduino.h"

Ultrasonic::Ultrasonic(byte isiPinTrigger, byte isiPinEcho) {
  pinTrigger = isiPinTrigger;
  pinEcho = isiPinEcho;
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
}

long Ultrasonic::bacaUltrasonic() {
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(8);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(8);
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(8);
  long duration = pulseIn(pinEcho, HIGH);
  long distance = (duration / 2) / 29.1;
  return distance;
}
