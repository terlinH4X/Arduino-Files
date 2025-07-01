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

## How to Use

### 1. Uploading the Sketch

1. Connect your Arduino board to your PC using a USB cable.
2. Open the Arduino IDE.
3. Open one of the `.ino` files from this repository.
4. Select the correct **Board** and **Port** from the **Tools** menu.
5. Click the **Upload** button.

### 2. Wiring Diagrams

- **Single Bulb (`lightBulb\lightBulb.ino`)**:
  - Connect the bulb or LED to **pin 4** with appropriate circuitry.

- **Four Bulbs (`4lightBulb\4lightBulb.ino`)**:
  - Connect bulbs/LEDs to **pins 4, 5, 6, and 7**.

- **Button-Controlled LED (`ButtonControlledLED\ButtonControlledLED.ino`)**:
  - Connect the LED to **pin 2** and the button to **pin 6**.
  - Ensure the button is properly debounced or use a pull-down resistor if needed.

**Note:** If using real 220V/110V AC bulbs, always use a **relay module** for safety.

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
