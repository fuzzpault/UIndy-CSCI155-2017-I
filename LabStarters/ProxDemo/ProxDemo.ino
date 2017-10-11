/* This example shows how the IR proximity sensors can be used.
   Run the program while connected to USB and use the Serial
   Monitor or Serial Plotter to see the values from the
   proximity sensors.
   See https://www.pololu.com/docs/0J63/all#3.6 for a description
   of how these sensors work.
   Below the left and right sensors are commented out for this demo.
*/

#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4ProximitySensors proxSensors;

void setup()
{
  proxSensors.initThreeSensors();
}

void loop(){
  
  proxSensors.read();
  int16_t frontLeft = proxSensors.countsFrontWithLeftLeds();
  int16_t frontRight = proxSensors.countsFrontWithRightLeds();
  /*int16_t left = proxSensors.countsLeftWithLeftLeds();
  int16_t right = proxSensors.countsRightWithRightLeds(); */

  Serial.print(frontLeft);
  Serial.print(",");
  Serial.println(frontRight);
  /*Serial.print(",");
  Serial.print(left);
  Serial.print(",");
  Serial.println(right); */

  delay(50);
}



