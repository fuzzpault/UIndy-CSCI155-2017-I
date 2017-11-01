/*  Name: Paul Talaga
 *  Date: Oct 13, 2017
 *  Desc: Once the A button is pressed, accelerate to full speed smoothly.
*/

#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4Motors motors;
Zumo32U4ButtonA buttonA;

int mode;

void setup()
{
  mode = 0;   // Starting mode
  // Wait for the user to press button A.
  buttonA.waitForButton();
}

void loop(){
  if(mode == 0){  // Accel
    mode++;
    for(int i = 0; i < 400; i++){
      motors.setLeftSpeed(i);
      motors.setRightSpeed(i);
      delay(10); // Absolutely neccessary otherwise it goes up to full speed faster than the robot can respond.
    }
  }
  
  delay(50);
}

