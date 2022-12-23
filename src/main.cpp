#include <Arduino.h>
#include <moistsensor.h>
#include <pumpp.h>
//#include <display.h>




//float value2 = 0;
//float value3 = 0;
//float value4 = 0;
void setup() {
  Serial.begin(9600);


initMoistOne();
initPump();

};
void loop() {

mymoister();

}
