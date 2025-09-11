#include <AFMotor.h>

const int trigPin = A0;
const int echoPin = A2;
int buzzerPin = A5;  // Buzzer connected to pin 8

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
  Serial.begin(9600);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;

  // Print distance
  Serial.print("Distance: ");
  Serial.println(distance);


  // Buzzer logic
  if (distance <= 10 && distance > 0) {
    digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
    // analogWrite(buzzerPin, 1);

  } else {
    digitalWrite(buzzerPin, LOW);  // Turn buzzer OFF
    // analogWrite(buzzerPin, 0);
  }

  delay(100);
}
