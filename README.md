# Ultrasonic Sensor Library for Arduino

This repository contains a simple Arduino library for interfacing with an ultrasonic sensor. The library allows you to easily read distances using the ultrasonic sensor.

## Overview

The `Ultrasonic` class provides an interface for the ultrasonic sensor to measure distances. It uses the trigger and echo pins to send and receive ultrasonic waves.

## Files

- **Ultrasonic.cpp**: Implementation of the Ultrasonic class.
- **Ultrasonic.h**: Header file for the Ultrasonic class.

## How to Use

1. **Include the Library**: Include the Ultrasonic library in your Arduino sketch.

   ```cpp
   #include "Ultrasonic.h"
   ```

2. **\*Create an Instance:** Create an instance of the Ultrasonic class by specifying the trigger and echo pins.

   ```cpp
   Ultrasonic sensors(triggerPin, echoPin);
   ```

3. **Read Distance:** Call the bacaUltrasonic() method to get the distance in centimeters.

   ```cpp
   long distance = sensors.readUltrasonic();
   ```

## Example Sketch

Here's a simple example of how to use the library in your Arduino sketch:

```cpp
#include "Ultrasonic.h"

#define TRIGGER_PIN 9
#define ECHO_PIN 10

Ultrasonic sensors(TRIGGER_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long distance = sensor.readUltrasonic();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000); // Wait for 1 second before the next measurement
}

```

## Installation

1. Clone the repository or download the files.
2. Copy Ultrasonic.cpp and Ultrasonic.h into your Arduino library folder (usually found in Documents/Arduino/libraries/).
3. Restart the Arduino IDE to see the library in the include options.

## License

This project is licensed under the MIT License.
