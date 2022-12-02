//calibrate_uno.ino
#include <Arduino.h>            // Arduino Framework

/*
  Soil Moisture Sensor Calibration
  soil_calibrate_uno.ino
  Gets raw reading from soil sensor and displays on Serial Monitor
  Use to establish minuimum and maximum values
  Works with Capacitive and Resistive Sensors
  Uses Arduino Uno
 
  DroneBot Workshop 2022
  https://dronebotworkshop.com
*/

// Variable for sensor value

// Analog input port
#define SENSOR_IN A0
class MyMoist {       // The class
  public:             // Access specifier
    int sensorval;
    int highnumber;
    int lownumber;        // Attribute (int variable)
};

void setup() {
    MyMoist moist1;
    moist1.sensorval = analogRead(SENSOR_IN);
    moist1.lownumber = analogRead(SENSOR_IN);
    moist1.highnumber = analogRead(SENSOR_IN);

};
void loop() {

// Read sensor value
if (moist1.lownumber = 0) {moist1.lownumber = moist1.sensorval;}

if (sensorval != 0){
    if (highnumber > sensorval){(highnumber = sensorval);}
    else if (lownumber < sensorval){(lownumber = sensorval);}
    
    {
        /* code */
    }
    ;};
// Print to Serial Monitor
Serial.println(sensorval);
Serial.println(highnumber);
Serial.println(lownumber);

delay(100);
}