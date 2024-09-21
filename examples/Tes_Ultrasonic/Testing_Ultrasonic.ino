#include <Ultrasonic.h>
Ultrasonic sensors(6, 5); // trigPin = 6 , echoPin =8

void setup() {
  Serial.begin(9600);
}

void loop() {
  long distance = sensors.readUltrasonic();
  if (distance > 0)
    Serial.println(distance);
}
