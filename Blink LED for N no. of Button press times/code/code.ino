/* This program blinks LED for the number of time Button is pressed
 * 
 * Hardware Component:
 *      Arduino Uno
 *      Buttons
 *      LED
 * 
 * Circuit info: 
 *      D3 of Arduino Uno is connected to Button pin to count the number of times it is pressed
 *      D2 of Arduino Uno is connected to Button pin to start blinking the LED
 *      D13 of Arduino Uno is connected to LED
 *      
 * Contact us: 
 *     Website: https://ieeeprojectsbengaluru.godaddysites.com/ 
 *     Youtube Channel: https://www.youtube.com/channel/UCKEkm5M_eVhb_NLZtv-M8MA 
 *
 */
 
// Pin configuration
const unsigned char ENABLEBUTTON = 3;      
const unsigned char COUNTBUTTON = 2;     
const unsigned char LED = 13;  

// Variable to store button count        
static byte buttonCount;         
 
void setup() 
{
  // Configure Button to INPUT mode
  pinMode(COUNTBUTTON, INPUT);
  digitalWrite(COUNTBUTTON, HIGH);      // Set pullup resistor         
  pinMode(ENABLEBUTTON, INPUT); 
  digitalWrite(ENABLEBUTTON, HIGH);      // Set pullup resistor         

  // Configure LED to OUTPUT mode
  pinMode(LED, OUTPUT); 
            
}

void loop()
{
  // Initial condition for LED  
  digitalWrite(LED, LOW); 

  // Check if button was pressed
  if (digitalRead(COUNTBUTTON) == LOW)  
  {
   while (digitalRead(COUNTBUTTON) == LOW);
   // Increment the count
    buttonCount++; 
    // Add delay for debouncing                  
    delay(250);                       
  }

  // check if enable button is pressed
  if(digitalRead(ENABLEBUTTON) == LOW) 
  {
    for (byte n = 1; n <= buttonCount; n++)    
     {
      digitalWrite(LED, HIGH);      
      delay(500);                      
      digitalWrite(LED, LOW);       
      delay(500);                     
    }
    // Reset count for next iteration
    buttonCount = 0; 
  }   
}
