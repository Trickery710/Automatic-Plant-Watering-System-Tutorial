#include <Arduino.h>
//#include <moistsensor.h>

//pump output pins
int IN1 = 2;//digital pin to attach to pump relay
//int IN2 = 3;
//int IN3 = 4;
//int IN4 = 5;
float value1 = 0;

  //pump pin
 void initPump() {
    pinMode(IN1, OUTPUT);//define what pint to use
  digitalWrite(IN1, HIGH);// turn pump off
 }

void mymoister() {

  Serial.print("MOISTURE LEVEL:");
  value1 = analogRead(Pin1);
  Serial.println(value1);
  if(value1>500)
  { if (debounce > 200){
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