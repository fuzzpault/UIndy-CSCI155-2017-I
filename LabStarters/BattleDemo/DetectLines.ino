/*  Name: Paul Talaga
 *  Date: Dec 4, 2017
 *  Desc: Print the line sensor values to the serial line.
*/

#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4LineSensors lineSensors;

#define NUM_SENSORS 5
// Array to hold the 5 sensor values
uint16_t lineSensorValues[NUM_SENSORS];

void setup()
{
  lineSensors.initFiveSensors();
}

void loop(){
  // Read the sensor data into the array;
  lineSensors.read(lineSensorValues, QTR_EMITTERS_ON );

  // Print each sensor value to the serial line for your analysis.
  for(int i = 0; i < NUM_SENSORS; i++){
    Serial.print(lineSensorValues[i]);
    Serial.print(",");
  }
  Serial.println(" ");

  delay(50);
}

