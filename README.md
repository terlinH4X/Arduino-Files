# Arduino Light Bulb Control

This project contains two Arduino sketches for controlling light bulbs using digital pins on an Arduino board. One sketch is designed to control a **single bulb**, while the other is for **controlling four bulbs** in a sequence.

## Files

- `lightBulb\lightBulb.ino` – Turns a single light bulb on and off at intervals.
- `4lightBulb\4lightBulb.ino` – Controls four bulbs, turning them on and off in a defined pattern.

## Requirements

- Arduino board ( UNO,)
- Jumper wires
- 1–4 light bulbs or LEDs (with suitable resistors)
- Relay module or transistor circuit (if using AC bulbs)
- Arduino IDE installed

## How to Use

### 1. Uploading the Sketch

1. Connect your Arduino board to your PC using a USB cable.
2. Open the Arduino IDE.
3. Open one of the `.ino` files from this repository.
4. Select the correct **Board** and **Port** from the **Tools** menu.
5. Click the **Upload** button.

### 2. Wiring Diagram

- **For Single Bulb (`lightBulb\lightBulb.ino`)**:
  - Connect the bulb or LED to **pin 4** with appropriate circuitry.

- **For Four Bulbs (`4lightBulb\4lightBulb.ino`)**:
  - Connect bulbs/LEDs to **pins 4, 5, 6, and 7**.

Make sure to use a **relay module** if you're working with real 220V/110V AC bulbs for safety.

## Code Behavior

### `lightBulb\lightBulb.ino`

- Turns on the bulb for **1 second**, then off for **1 seconds** repeatedly.

### `4lightBulb\4lightBulb.ino`

- Turns on each bulb one after the other with a **1 second delay** between them.
- After the fourth bulb, all bulbs are turned off before the cycle restarts.

## License

This project is open-source under the MIT License. Feel free to modify and use it in your own projects.

## Author

Created by TERLIN.  
If you find this helpful, give the repo a star 🌟 on GitHub!
