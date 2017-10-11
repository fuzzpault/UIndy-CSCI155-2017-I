#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4Encoders encoders;
int16_t lastLeft;
int16_t lastRight;

void setup()
{
  lastLeft = encoders.getCountsLeft();
  lastRight = encoders.getCountsRight();
}

void loop()
{
  int16_t countsLeft = encoders.getCountsLeft();
  int16_t countsRight = encoders.getCountsRight();
  if (lastLeft != countsLeft || lastRight != countsRight){
    lastLeft = countsLeft;
    lastRight = countsRight;
    Serial.print("L: ");
    Serial.print(countsLeft);
    Serial.print(" ");
    Serial.print("R: ");
    Serial.println(countsRight);
  }
}
