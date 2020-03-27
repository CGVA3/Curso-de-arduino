int verde = 3;
int ambar = 6;
int rojo  = 8;
  
void setup(){
  pinMode(verde,OUTPUT);
  pinMode(ambar,OUTPUT);
  pinMode(rojo,OUTPUT);
  
}
int i = 0;
void loop(){
  //Verde
  digitalWrite(verde,HIGH);
  delay(2000); 
  digitalWrite(verde,LOW);
  //Parpadeo
  while(i<=10){
  	delay(400);
  	digitalWrite(verde,HIGH);
  	delay(400);
  	digitalWrite(verde,LOW);
  	i++;
  }
  
  digitalWrite(verde,LOW);
  //ambar
  digitalWrite(ambar,HIGH);
  delay(1000);
  digitalWrite(ambar,LOW);
  
  //rojo
  digitalWrite(rojo,HIGH);
  delay(2000);
  digitalWrite(rojo,LOW);
}
