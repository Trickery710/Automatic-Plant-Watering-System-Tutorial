#include <Arduino.h>

int IN1 = 2;//pin for pumps
//int IN2 = 3;
//int IN3 = 4;
//int IN4 = 5;

int Pin1 = A0; //analong read pin for moisture sensor
//int Pin2 = A1;
//int Pin3 = A2;
//int Pin4 = A3;
// Sensor constants - replace with values from calibration sketch
// Constant for dry sensor
const int DryValue = 592;
// Constant for wet sensor
const int WetValue = 299;
// Variables for soil moisture
int soilMoistureValue;
int soilMoisturePercent;
// Analog input port

float value1 = 0;
//float value2 = 0;
//float value3 = 0;
//float value4 = 0;
int debounce = 0;
void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);

  pinMode(Pin1, INPUT);
  digitalWrite(IN1, HIGH);
 
  delay(500);
}
void loop() {

  Serial.print("MOISTURE LEVEL:");
  value1 = analogRead(Pin1);
  Serial.println(value1);
  if(value1>500)
  { if (debounce > 20){
      digitalWrite(IN1, LOW);
      Serial.println("pump on:");
      debounce = 0;
  }
  else debounce=debounce +1;
  }
  else
  {
    digitalWrite(IN1, HIGH);
     Serial.println("pump off:");
      debounce = 0;

    };
  


    Serial.println(debounce);
  delay(1000);
}
