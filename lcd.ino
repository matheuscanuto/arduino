#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup(){
lcd.begin(16,2);
lcd.clear();

}
void loop(){
  
  lcd.setCursor(0,0);
    lcd.print("qualquer ");
    lcd.setCursor(0,1);
  lcd.print("coisa");

  delay(1000);
}
