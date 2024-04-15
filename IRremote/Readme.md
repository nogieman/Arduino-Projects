# Arduino IR Remote Control Reciever

This Arduino project uses an IR Reciever and enables remote control of LEDs using an IR remote control. Each button press on the remote control toggles the state of an LED connected to the Arduino.

## Components Required
- Arduino UNO
- IR Receiver Module (e.g., TSOP1738)
- LEDs
- Resistors (220 ohms for each LED)
- Breadboard (optional)
- Jumper wires

## Dependencies
- IRremote : Arduino library for receiving, decoding, and sending infrared signals using an IR LED and receiver. To be manually downloaded depending on the receiver used.

## Setup
1. Connect the IR Receiver module to pin 2 of the Arduino.
2. Connect LEDs to digital pins 4, 5, 6, and 7 of the Arduino, each through a 220-ohm resistor.
3. Ensure that the Arduino is powered up and ready to receive commands.

## Usage
1. Upload the provided Arduino sketch to your Arduino board.
2. Power up the Arduino.
3. Use an IR remote control to send commands to the Arduino. Each button press on the remote control toggles the corresponding LED on/off.

## Supported Commands
- Button 1: Toggles LED connected to pin 4 on/off
- Button 2: Toggles LED connected to pin 5 on/off
- Button 3: Toggles LED connected to pin 6 on/off
- Button 4: Toggles LED connected to pin 7 on/off
- Power Button: Toggles all LEDs on/off simultaneously

