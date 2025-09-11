#include <AFMotor.h>

// Create motor objects for M3 and M4 with 8kHz PWM
AF_DCMotor motor3(3, MOTOR34_8KHZ);
AF_DCMotor motor4(4, MOTOR34_8KHZ);

void setup() {
  Serial.begin(9600);
  Serial.println("Running motors M3 & M4 together...");

  // Set both motor speeds (0–255)
  motor3.setSpeed(255);
  motor4.setSpeed(255);

  // Run both motors forward
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void loop() {
  // They will keep spinning forward together
  // delay(5000);
  // motor3.run(RELEASE);
  // motor4.run(RELEASE);
}
