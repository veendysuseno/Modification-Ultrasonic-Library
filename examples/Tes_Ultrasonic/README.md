## README.md Testing_Ultrasonic.ino (Ultrasonic Sensor Project)

## Description

This project utilizes an ultrasonic sensor to measure distance. The sensor is connected to an Arduino, and the measured distance data will be displayed in the Serial Monitor.

## Components Used

- Arduino Uno or other Arduino boards
- Ultrasonic Sensor (HC-SR04)
- Jumper wires

## Project Structure

/Ultrasonic_Sensors_Library <br/>
|-- Ultrasonic.h <br/>
|-- Ultrasonic.cpp <br/>
|-- Test_Ultrasonic.ino <br/>

### Files

1. **`Ultrasonic.h`**

   - Header file for the `Ultrasonic` class.
   - Defines the methods and attributes needed to operate the ultrasonic sensor.

2. **`Ultrasonic.cpp`**

   - Implementation of the `Ultrasonic` class.
   - Configures the trigger and echo pins, and reads the distance from the sensor.

3. **`Test_Ultrasonic.ino`**
   - Main program used to test the ultrasonic sensor.
   - Initializes serial communication and continuously reads the distance.

## Usage

1. **Wiring**:

   - Connect the Trigger pin of the ultrasonic sensor to digital pin 6 on the Arduino.
   - Connect the Echo pin of the ultrasonic sensor to digital pin 5 on the Arduino.
   - Connect the VCC and GND pins of the sensor to the power supply of the Arduino.

2. **Compile and Upload**:

   - Open the `Test_Ultrasonic.ino` file in the Arduino IDE.
   - Compile and upload the program to the Arduino board.

3. **Viewing Results**:
   - Open the Serial Monitor (Ctrl + Shift + M) in the Arduino IDE.
   - You will see the measured distance displayed in centimeters.

## Notes

- Ensure to check the physical connections and pin configuration before uploading the code.
- The ultrasonic sensor works well within a certain range, so make sure the object being measured is within the sensor's range.

## License

This project is licensed under the [MIT License](LICENSE).
