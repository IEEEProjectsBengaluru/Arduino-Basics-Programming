/* This program interfaces a button and LED to Arduino Uno. LED is turned ON when button is pressed and OFF when button is released
 *      
 * Hardware Component:
 *  	Arduino Uno
 *  	Button
 *  	LED
 *  
 * Circuit info:
 *  D3 of Arduino Uno is connected to Button
 *  D4 of Arduino Uno is connected to LED
 * 
 * Author : IEEE Projects Bengaluru
 * 
 * Contact us: 
 *     Website: https://ieeeprojectsbengaluru.godaddysites.com/ 
 *     Youtube Channel: https://www.youtube.com/channel/UCKEkm5M_eVhb_NLZtv-M8MA 
 *
 */

 // Pins for declaring LED and Button interface 
 const int BUTTON = 3;
 const int LED = 4;

 // Variable to store state of button
 static int buttonState;

 void setup()
 {
  // Configure Button to OUTPUT mode
  pinMode(BUTTON,INPUT);
  
  // Configure LED to INPUT mode
  pinMode(LED,OUTPUT);
 }

 void loop()
 {
  // Read the state of the pushbutton 
  buttonState=digitalRead(BUTTON);

  // Turn ON/OFF LED depending on the button state
  digitalWrite(LED,buttonState);
 }
