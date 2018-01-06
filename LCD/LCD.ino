#include <LiquidCrystal.h>

void loop() {
  // put your setup code here, to run once:
  pinMode(?,OUTPUT);
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
  lcd.begin(16,2);
}
void setup() {
  // put your main code here, to run repeatedly:
  analogWrite(?,???);
  lcd.setCursor(?,?);
  lcd.write("?");
}
