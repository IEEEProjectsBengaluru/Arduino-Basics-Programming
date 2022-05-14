 
/* This program contols the LED brightness using analogWrite() function
 *  
 * Hardware Component :  
 *      Arduino Uno 
 *      LED
 * 
 * Circuit info: 
 *      D9 of Arduino Uno is connected to a LED  
 *
 * Author : IEEE Projects Bengaluru
 * 
 * Contact us: 
 *     Website: https://ieeeprojectsbengaluru.godaddysites.com/ 
 *     Youtube Channel: https://www.youtube.com/channel/UCKEkm5M_eVhb_NLZtv-M8MA 
 *
 */


int led = 9;           // The PWM pin the LED is attached to
int brightness = 0;    // How bright the LED is
int fadeAmount = 5;    // How many points to fade the LED by

void setup() {
  // Declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

  void loop() {
  // Set the brightness of pin 9:
  analogWrite(led, brightness);

  // Change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // Wait for 30 milliseconds to see the dimming effect
  delay(30);
}
