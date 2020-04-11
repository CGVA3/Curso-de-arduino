#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int puertoRojo = 10;
int puertoVerde = 6;
int puertoAzul = 9;

void RGB(int red, int green, int blue)
{
  analogWrite(puertoRojo, red);
  analogWrite(puertoVerde, green);
  analogWrite(puertoAzul, blue);  
}

void setup() {
  pinMode(puertoRojo, OUTPUT);
  pinMode(puertoVerde, OUTPUT);
  pinMode(puertoAzul, OUTPUT);  
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
  if(c>=-40 && c<=0){
  	RGB(0, 0, 255);  // Azul
  }else if(c>=1 && c<=40){
  	RGB(255, 255, 0);// Amarillo
  }else{
  	RGB(255, 0, 0);  // Rojo
  }
}
 