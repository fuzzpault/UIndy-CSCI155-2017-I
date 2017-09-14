/* This example shows how to blink the three user LEDs
on the Zumo 32U4. */

#include <Wire.h>
#include <Zumo32U4.h>

void setup()
{

}

void loop()
{
  // Turn the yellow LED on.
  ledRed(0);
  ledYellow(1);
  ledGreen(0);
  delay(1000);
  
  // Turn the green LED on.
  ledRed(0);
  ledYellow(0);
  ledGreen(1);
  delay(1000);

  // Turn the red LED on.
  ledRed(1);
  ledYellow(0);
  ledGreen(0);
  delay(1000);
}
