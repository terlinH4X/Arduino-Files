const int trigPin=9;
const int echoPin=10;
const int ledPin=7;
const int buzzerPin=6;
const int distanceThreshold=15;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(ledPin, OUTPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
long duration;
int distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration= pulseIn(echoPin, HIGH);
distance=duration*0.034/2;
Serial.print("distance: ");
Serial.print(distance);
Serial.println("cm");

if (distance>0 && distance <= distanceThreshold) {
digitalWrite(ledPin, HIGH);
digitalWrite(buzzerPin, HIGH);
delay(200);
digitalWrite(buzzerPin, LOW);
}else {
digitalWrite(ledPin, LOW);
digitalWrite(buzzerPin, LOW);
}
delay(100);
}
