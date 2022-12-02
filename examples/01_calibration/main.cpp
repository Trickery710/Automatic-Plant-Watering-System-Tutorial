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
int sensorval;
int highnumber;
int lownumber;
int oldnumber;
// Analog input port
#define SENSOR_IN A0


void setup() {

// Open Serial Monitor
Serial.begin(9600);


//this made my uno not respond to readings
// Set ADC to use 3.3-volt AREF input
//analogReference(EXTERNAL);

//placeholder for high and low readings
highnumber = analogRead(SENSOR_IN);
lownumber = analogRead(SENSOR_IN);

}
void loop() {

// Read sensor value
sensorval = analogRead(SENSOR_IN);
if (lownumber = 0) {lownumber = sensorval;}

if (sensorval != 0){
    if (highnumber > sensorval){(highnumber = sensorval);}
    else if (lownumber < sensorval){(lownumber = sensorval);}
    
    {
        /* code */
    }
    ;}
// Print to Serial Monitor
if (oldnumber != sensorval){
Serial.println(sensorval);
Serial.println(highnumber);
Serial.println(lownumber);}
oldnumber = sensorval;
delay(100);
}