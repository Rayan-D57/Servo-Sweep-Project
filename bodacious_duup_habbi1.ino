#include <Servo.h>

//Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  //Attach servos to digital pins 2,3,4,and 5
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);

  //Run the sweep example for 2 seconds
  unsigned long startTime = millis();
  while (millis() - startTime < 2000) {
    // Sweep from 0 to 180 degrees
    for (int pos = 0; pos <= 180; pos += 1) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }
    //Sweep from 180 to 0 degrees
    for (int pos = 180; pos >= 0; pos -= 1) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }
  }

  //Set all motors to hold at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // No action needed here as the motors are holding their position
}