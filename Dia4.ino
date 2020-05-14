#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int inches = 0;

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup() {
  lcd.begin(16, 2);
  lcd.print("Distancia:");
  lcd.setCursor(0,1);
  lcd.print("CM: ");
}
int ultimo = 0;
void loop() {
	cm = 0.01723 * readUltrasonicDistance(7, 7);
  	inches = cm/2.54;
  	lcd.setCursor(3,1);
  	lcd.print(cm);
  	lcd.setCursor(7,1);
  	lcd.print("in:");
  	lcd.setCursor(10,1);
  	lcd.print(inches);
    if(cm != ultimo){
    	ultimo=cm;
  		lcd.print("    ");
  	}
}
