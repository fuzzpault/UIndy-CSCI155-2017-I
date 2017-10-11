// Name: Paul Talaga
// Date: Sept 27, 2017
// Desc: Run the robot forward for 5 seconds and then turn 90 degrees to the left.

#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4Motors motors;
Zumo32U4ButtonA buttonA;
int mode;

void setup()
{
  mode = 0;
  // Wait for the user to press button A.
  buttonA.waitForButton();

  // Delay so that the robot does not move away while the user is
  // still touching it.
  delay(1000);
}

void loop(){
  if(mode == 0){
    mode++;
    
    // Run both motors forward.
    motors.setLeftSpeed(300);
    motors.setRightSpeed(300);
    
    // Let the robot move forward
    delay(5000);

    // Turn left
    motors.setLeftSpeed(-200);
    motors.setRightSpeed(200);

    delay(450); // Wait a little to turn  
    // The 90 degrees is dependent on your battery voltage, so your timing
    // WILL vary!
    
    // Stop the motors.
    motors.setLeftSpeed(0);
    motors.setRightSpeed(0);
  }
  delay(10);
}
