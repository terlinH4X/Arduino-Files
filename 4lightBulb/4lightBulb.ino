void setup() {
  // Set pins 4, 5, 6, and 7 as outputs
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // Turn ON and OFF each bulb one after the other

  digitalWrite(4, HIGH);  // Bulb 1 ON
  delay(1000);
  digitalWrite(4, LOW);   // Bulb 1 OFF
  delay(500);

  digitalWrite(5, HIGH);  // Bulb 2 ON
  delay(1000);
  digitalWrite(5, LOW);   // Bulb 2 OFF
  delay(500);
  
  digitalWrite(6, HIGH);  // Bulb 3 ON
  delay(1000);
  digitalWrite(6, LOW);   // Bulb 3 OFF
  delay(500);

  digitalWrite(7, HIGH);  // Bulb 4 ON
  delay(1000);
  digitalWrite(7, LOW);   // Bulb 4 OFF
  delay(500);
}
