#include <AFMotor.h>
#include <NewPing.h>
#include <Servo.h>

#define TRIG_PIN A0
#define ECHO_PIN A2
#define MAX_DISTANCE 200
#define MAX_SPEED 200

NewPing radar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

AF_DCMotor motorLeft(2);   // M2 = Left motor
AF_DCMotor motorRight(4);  // M4 = Right motor
Servo myservo;

int distance = 100;
int pos = 0;

void setup() {
  motorLeft.setSpeed(MAX_SPEED);
  motorRight.setSpeed(MAX_SPEED);

  myservo.attach(9);
  myservo.write(90);
  delay(2000);

  // Take initial distance readings
  distance = checkDistance();
  delay(100);
  distance = checkDistance();
  delay(100);
  distance = checkDistance();
  delay(100);
  distance = checkDistance();
  delay(100);

  Serial.begin(9600);
}

void loop() {
  int distanceRight = 0;
  int distanceLeft = 0;
  delay(40);

  if (distance <= 50) {
    stopMovement();
    delay(100);
    moveBackward();
    delay(300);
    stopMovement();
    delay(200);

    distanceRight = checkRightDistance();
    delay(200);
    distanceLeft = checkLeftDistance();
    delay(200);

    if (distanceRight >= distanceLeft) {
      turnRight();
      stopMovement();
    } else {
      turnLeft();
      stopMovement();
    }
  } else {
    moveForward();
  }

  distance = checkDistance();
  Serial.println(distance);
}

// --- Distance Checking Functions ---
int checkRightDistance() {
  for (pos = 90; pos >= 0; pos--) {
    myservo.write(pos);
    delay(5);
  }
  myservo.write(0);
  delay(500);
  int distance = checkDistance();
  delay(100);
  for (pos = 0; pos <= 90; pos++) {
    myservo.write(pos);
    delay(5);
  }
  myservo.write(90);
  return distance;
}

int checkLeftDistance() {
  for (pos = 90; pos <= 180; pos++) {
    myservo.write(pos);
    delay(5);
  }
  myservo.write(180);
  delay(500);
  int distance = checkDistance();
  delay(100);
  for (pos = 180; pos >= 90; pos--) {
    myservo.write(pos);
    delay(5);
  }
  myservo.write(90);
  return distance;
}

int checkDistance() {
  delay(70);
  int cm = radar.ping_cm();
  if (cm == 0) cm = 250;

  return cm;
}

// --- Motor Control Functions ---
void stopMovement() {
  motorLeft.run(RELEASE);
  motorRight.run(RELEASE);
}

void moveForward() {
  motorLeft.run(FORWARD);
  motorRight.run(FORWARD);
}

void moveBackward() {
  motorLeft.run(BACKWARD);
  motorRight.run(BACKWARD);
}

void turnLeft() {
  motorLeft.run(BACKWARD);
  motorRight.run(FORWARD);
  delay(400);
}

void turnRight() {
  motorLeft.run(FORWARD);
  motorRight.run(BACKWARD);
  delay(400);
}
