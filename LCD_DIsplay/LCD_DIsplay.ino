
#include <LiquidCrystal.h> // includes the LiquidCrystal Library
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)

void setup() {
lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
pinMode(11, OUTPUT);
}

void loop() {
analogWrite(11,100); // Generate PWM signal at pin D11, value of 100 (out of 255)
lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed
lcd.print("Put Your txt"); // Prints string  on the LCD
delay(10);
lcd.setCursor(0,1);
lcd.print("Here");
delay(10);
}
