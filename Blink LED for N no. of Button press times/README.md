## Blink LED for N no. of Button press times

 
## Introduction
This program blinks the LED for the number of time Button is pressed.

## Hardware Components:

 - Arduino Uno
 - LED 
 - Buttons

## Development Tools Used:

- Simulation  - PROTEUS 7 Professional
- Programming - Arduino IDE 1.8.15

## Hardware Connection:

- D3 of Arduino Uno is connected to Button pin to count the number of times it is pressed
- D2 of Arduino Uno is connected to Button pin to start blinking the LED
- D13 of Arduino Uno is connected to LED

## Usage:

- Download the schematic.pdsprj file->open in PROTEUS 7 tool
 <img src=https://github.com/IEEEProjectsBengaluru/Arduino-Basics-Programming/blob/main/Blink%20LED%20for%20N%20no.%20of%20Button%20press%20times/results/circuitConnections.png>

- Download code. ino and open in Arduino
- Go to tools->select Board->select Arduino UNO
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS ->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in Program file->Click OK
  <img src=https://user-images.githubusercontent.com/84024571/134045169-35cc61e7-2f3e-4e02-8c82-73372514dfdb.PNG>

- Click on the Run button.

## Output:

 <img src=https://github.com/IEEEProjectsBengaluru/Arduino-Basics-Programming/blob/main/Blink%20LED%20for%20N%20no.%20of%20Button%20press%20times/results/ezgif.com-gif-maker.gif>
