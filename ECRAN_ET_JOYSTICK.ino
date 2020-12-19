#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  if(analogRead(0) == 513){
  lcd.print("STOPPED");
  } else if(analogRead(0) < 513) {
  lcd.print("REVERSE");
  } else if(analogRead(0) > 513) {
  lcd.print("FORWARD");
  }
  lcd.setCursor(0, 1);
  if(analogRead(1) == 513){
  lcd.print("STOPPED");
  } else if(analogRead(1) < 513) {
  lcd.print("LEFT ");
  } else if(analogRead(1) > 513) {
  lcd.print("RIGHT");
  }
}
