/* This program bliks the led connected to Arduino for one second, repeatedly.

 * Hardware Component :  
 *      Arduino Uno 
 *      LED
 * 
 * Circuit info: 
 *      D8 of Arduino Uno is connected to a LED  
 *
 * Author : IEEE Projects Bengaluru
 * 
 * Contact us: 
 *     Website: https://ieeeprojectsbengaluru.godaddysites.com/ 
 *     Youtube Channel: https://www.youtube.com/channel/UCKEkm5M_eVhb_NLZtv-M8MA 
 *
 */

#define LEDPIN 8 

void setup() {
  // initialize digital pin D8 as an output.
  pinMode(LEDPIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDPIN, HIGH);   // turn the LED on 
  delay(1000);                       // wait for a second
  digitalWrite(LEDPIN, LOW);    // turn the LED off 
  delay(1000);                       // wait for a second
}
