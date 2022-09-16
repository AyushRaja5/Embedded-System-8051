#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,4,3,2,1);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("We are online Engineers");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}ś
