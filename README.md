# Arduino Light Bulb Control

This project contains multiple Arduino sketches for controlling light bulbs or LEDs using digital pins on an Arduino board. Each sketch demonstrates a different type of control, such as timed blinking, sequencing, or button-triggered activation.

## Files

- `lightBulb\lightBulb.ino` – Turns a single light bulb on and off at intervals.
- `4lightBulb\4lightBulb.ino` – Controls four bulbs, turning them on and off in a defined pattern.
- `ButtonControlledLED\ButtonControlledLED.ino` – Turns an LED on or off based on the state of a button.

## Requirements

- Arduino board (UNO, etc.)
- Jumper wires
- 1–4 light bulbs or LEDs (with suitable resistors)
- Push button (for button-controlled sketch)
- Relay module or transistor circuit (if using AC bulbs)
- Arduino IDE installed


## Code Behavior

### `lightBulb\lightBulb.ino`

- Turns on the bulb for **1 second**, then off for **1 second** repeatedly.

### `4lightBulb\4lightBulb.ino`

- Turns on each bulb one after the other with a **1 second delay** between them.
- After the fourth bulb, all bulbs are turned off before the cycle restarts.

### `ButtonControlledLED\ButtonControlledLED.ino`

- Continuously checks the button state.
- When the button is pressed, the LED turns **on**; when released, it turns **off**.

## License

This project is open-source under the MIT License. Feel free to modify and use it in your own projects.

## Author

Created by **TERLIN**.  
If you find this helpful, give the repo a ⭐️ on GitHub!
