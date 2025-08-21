#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Create LCD object with I2C address 0x27, 16 columns, 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();        // Initialize LCD
  lcd.backlight();   // Turn on backlight
  lcd.print("Hello World!");  // Display text
}

void loop() {
  // Nothing here for now
}
