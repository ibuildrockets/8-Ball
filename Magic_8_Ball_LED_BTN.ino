#include <Wire.h>
#include <SeeedOLED.h>
#include "wordlist.h" // List of words
#include "eight.h"  // 8-ball Bitmap

long randNumber;

const int ledPin = 7;      // Digital Pin 7 
const int ButtonPin = 11;  // Digital Pin 11
int ButtonState = 0;


void setup()
{
  pinMode(ButtonPin, INPUT_PULLUP);  // Use the internal pull-ups.
  pinMode(ledPin, OUTPUT);
  Wire.begin();
  SeeedOled.init();    // Initialze SEEED OLED display
  DDRB|=0x21;          // Digital pin 8, LED glow indicates Film properly Connected .
  PORTB |= 0x21;
  randomSeed(analogRead(0));         // Get a random seed
  SeeedOled.setNormalDisplay();      // Set display to normal mode (i.e non-inverse mode)
  SeeedOled.setPageMode();           // Set addressing mode to Page Mode
}

void loop()
{
  ButtonState = digitalRead(ButtonPin);
  if (ButtonState == LOW)

    {output = phrases[random(numberofphrases)]; // Chooses phrase
  digitalWrite(ledPin, LOW); // Turn off LED
  SeeedOled.setTextXY(0,0);
  SeeedOled.putString("                ");
  SeeedOled.setTextXY(1,0);
  SeeedOled.putString("                ");
  SeeedOled.setTextXY(2,0);
  SeeedOled.putString("   8-Ball Says  ");
  SeeedOled.setTextXY(3,0);
  SeeedOled.putString("                ");
  SeeedOled.setTextXY(4,0);   
  SeeedOled.putString(output); // Display the chosen phrase
  SeeedOled.setTextXY(5,0);
  SeeedOled.putString("                ");
  SeeedOled.setTextXY(6,0);
  SeeedOled.putString("                ");
  SeeedOled.setTextXY(7,0);
  SeeedOled.putString("                ");
  delay(5000); // Delay to show the phrase (5 seconds)
    }
    
    else {SeeedOled.setTextXY(0,0);   // Set cursor to top left position
          digitalWrite(ledPin, HIGH); // Turn on LED
          SeeedOled.drawBitmap(eightBit,1024);  // Display the 8-Ball bitmap
    }
    
}

