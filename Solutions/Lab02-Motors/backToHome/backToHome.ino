// Name: Paul Talaga
// Date: Sept 27, 2017
// Desc: Run the robot forward 12 inches (one floor tile)

#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4Motors motors;
Zumo32U4ButtonA buttonA;
int mode;
Zumo32U4Encoders encoders;

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
  int16_t countsLeft = encoders.getCountsLeft();
  int16_t countsRight = encoders.getCountsRight();
    
  if(mode == 0){
    mode++;
    
    // Run both motors forward.
    motors.setLeftSpeed(300);
    motors.setRightSpeed(300);
  }
  // Running forward, should I stop?
  if(mode == 1 && (countsLeft > 2412 || countsRight > 2412)){
    mode++;
    motors.setLeftSpeed(000);
    motors.setRightSpeed(000);
  }
  // Go back?
  if(mode == 2){
    mode++;
    delay(500);  // Pause a little
    // Go back!
    motors.setLeftSpeed(-300);
    motors.setRightSpeed(-300);
  }
  if(mode == 3 && (countsLeft <= 0 || countsRight <= 0)){
    mode++;
    motors.setLeftSpeed(000);
    motors.setRightSpeed(000);
  }
  
  delay(10);
}
