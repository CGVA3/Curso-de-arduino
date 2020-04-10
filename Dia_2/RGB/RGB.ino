int puertoRojo = 11;
int puertoVerde = 6;
int puertoAzul = 9;
void setup()
{
  pinMode(puertoRojo, OUTPUT);
  pinMode(puertoVerde, OUTPUT);
  pinMode(puertoAzul, OUTPUT);  
}
void RGB(int red, int green, int blue)
{
  analogWrite(puertoRojo, red);
  analogWrite(puertoVerde, green);
  analogWrite(puertoAzul, blue);  
}
void loop()
{
  RGB(255, 0, 0);  // Rojo
  delay(1000);
  RGB(0, 255, 0);  // Verde
  delay(1000);
  RGB(0, 0, 255);  // Azul
  delay(1000);
  RGB(255, 255, 0);// Amarillo
  delay(1000);  
  RGB(80, 0, 80);  // Morado
  delay(1000);
  RGB(0, 255, 255);// Aqua
  delay(1000);
}