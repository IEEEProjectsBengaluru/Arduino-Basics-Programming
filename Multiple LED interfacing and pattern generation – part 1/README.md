 ## Multiple LED interfacing and pattern generation – part 1

## Introduction
This folder contains code and schematic diagram for multiple LED blinking using Arduino.
A LED Bargraph is interfaced to Arduino Uno to generate few patterns. 

## Hardware Components:

 - Arduino Uno
 - LED Bargraph

## Development Tools Used:

- Simulation  - PROTEUS 8
- Programming - Arduino IDE

## Hardware Connection:

- D4 - D13 of Arduino Uno are connected to LED Bargraph

## Usage:

- Download the schematic.pdsprj file->open in PROTEUS 8 tool
 <img src=https://user-images.githubusercontent.com/84024571/134037783-a8a64aa0-18ac-4730-854b-4eb2ec680c8f.PNG width="800" height="400">

- Download code. ino and open in Arduino
- Go to tools->select Board->select Arduino UNO
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in Program file->Click OK
 <img src=https://user-images.githubusercontent.com/84024571/134045169-35cc61e7-2f3e-4e02-8c82-73372514dfdb.PNG width="800" height="400">

- Click on the Run button.

## Output:

 <img src=https://user-images.githubusercontent.com/84024571/134045736-d637c82d-0361-4054-a7ea-680921dc651a.PNG width="800" height="400">
