#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperatura:");
  lcd.setCursor(0,1);
  lcd.print("C: ");
}
int ultimo = 0;
void loop() {
	int temp = analogRead(A0);
  	int c = map(temp,20,358,-40,125);
  	lcd.setCursor(3,1);
  	lcd.print(c);
    if(c != ultimo){
    	ultimo=c;
  		lcd.print("    ");
  	}
}
 