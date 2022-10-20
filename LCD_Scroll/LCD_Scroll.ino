#include <LiquidCrystal.h>
//                  BS E D4 D5  D6 D7
//LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);


char * messagePadded = "                IoT Workshop Students of BLDEACET                ";

void setup()
{
  lcd.begin (16, 2);
  lcd.setCursor(5, 0);
  lcd.print("Hello");
}

void loop()
{
 analogWrite(11,100); // Generate PWM signal at pin D11, value of 100 (out of 255) 
  for (int letter = 0; letter <= strlen(messagePadded) - 16; letter++) //From 0 to upto n-16 characters supply to below function
  {
    showLetters(0, letter);
  }
}

void showLetters(int printStart, int startLetter)
{
  lcd.setCursor(printStart, 1);
  for (int letter = startLetter; letter <= startLetter + 15; letter++) // Print only 16 chars in Line #2 starting 'startLetter'
  {
    lcd.print(messagePadded[letter]);
  }
  lcd.print(" ");
  delay(250);
}

 
