//calibrate_uno.ino
#include <Arduino.h>            // Arduino Framework


int Pin1 = A0; //analong read pin for moisture sensor
//int Pin2 = A1;
//int Pin3 = A2;
//int Pin4 = A3;
// Sensor constants - replace with values from calibration sketch
// Constant for dry sensor
const int DryValue = 592;
// Constant for wet sensor
const int WetValue = 289;
// Variables for soil moisture
int soilMoistureValue;
int soilMoisturePercent;
// Analog input port

// Analog input port
#define SENSOR_IN A0

int debounce = 0;



//moisture sensor
void initMoistOne() {
    pinMode(Pin1, INPUT);
 delay(500);
 }



/* tried to make a class
class MyMoist {       // The class
  public:             // Access specifier
    int sensorval;
    int highnumber;
    int lownumber;        // Attribute (int variable)
};
*/
/*
void setup() {
    MyMoist moist1;
    moist1.sensorval = analogRead(SENSOR_IN);
    moist1.lownumber = analogRead(SENSOR_IN);
    moist1.highnumber = analogRead(SENSOR_IN);

};
*/
/*
void loop() {

// Read sensor value
if (moist1.lownumber = 0) {moist1.lownumber = moist1.sensorval;}

if (sensorval != 0){
    if (highnumber > sensorval){(highnumber = sensorval);}
    else if (lownumber < sensorval){(lownumber = sensorval);}
    
    {
        
    }
    ;};
// Print to Serial Monitor
Serial.println(sensorval);
Serial.println(highnumber);
Serial.println(lownumber);

delay(100);
}
*/