/*
e-Gizmo MAX6675 Thermocouple Temperature sensor

This sample sketch will show you the temperature and 
Fahrenheit value of the sensor.

MAX6675 library required on this code.
Downloads: https://github.com/e-Gizmo/MAX6675-Thermocouple-Temperature-sensor/blob/master/MAX6675.zip?raw=true

Modified by:
e-Gizmo Mechatronix Central
http://www.e-gizmo.com
August 15, 2017

Reference: http://www.ladyada.net/learn/sensors/thermocouple
*/

#include "max6675.h"

int DO = 4;
int CS = 5;
int CLK = 6;

MAX6675 thermocouple(CLK, CS, DO);
  
void setup() {
  Serial.begin(9600);
  Serial.println("MAX6675 TEST!");
  delay(500);
}

void loop() {
  // READOUT TEST
   Serial.print("C = "); 
   Serial.println(thermocouple.readCelsius());
   Serial.print("F = ");
   Serial.println(thermocouple.readFahrenheit());
   delay(1000);
}

