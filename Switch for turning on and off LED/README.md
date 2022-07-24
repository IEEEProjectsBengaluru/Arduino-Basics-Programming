## Switch for turning on and off LED
 
## Introduction
This program interfaces a button and LED to Arduino Uno. LED is turned ON when button is pressed and OFF when button is released.

## Hardware Components:

 - Arduino Uno
 - LED 
 - Button

## Development Tools Used:

- Simulation  - PROTEUS 7 Professional
- Programming - Arduino IDE 1.8.15

## Hardware Connection:

- D3 of Arduino Uno is connected to Button
- D4 of Arduino Uno is connected to LED

## Usage:

- Download the schematic.pdsprj file->open in PROTEUS 7 tool
 <img src=https://github.com/IEEEProjectsBengaluru/Arduino-Basics-Programming/blob/main/Switch%20for%20turning%20on%20and%20off%20LED/results/circuitConnections.png>>

- Download code. ino and open in Arduino
- Go to tools->select Board->select Arduino UNO
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS ->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in Program file->Click OK
  <img src=https://user-images.githubusercontent.com/84024571/134045169-35cc61e7-2f3e-4e02-8c82-73372514dfdb.PNG>

- Click on the Run button.

## Output:

 <img src=https://github.com/IEEEProjectsBengaluru/Arduino-Basics-Programming/blob/main/Switch%20for%20turning%20on%20and%20off%20LED/results/ezgif.com-gif-maker.gif>
