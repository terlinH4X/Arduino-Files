int ledPin = 4;
int inputPin = 2;
int buzzerPin = 6;
int pirState = LOW;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(inputPin);

  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);  // Turn on buzzer

    if (pirState == LOW) {
      Serial.println("Motion Detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);  // Turn off buzzer

    if (pirState == HIGH) {
      Serial.println("Motion Ended.");
      pirState = LOW;
    }
  }
}
