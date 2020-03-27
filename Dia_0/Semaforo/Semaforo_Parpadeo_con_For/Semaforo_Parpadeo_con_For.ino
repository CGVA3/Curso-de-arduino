int verde = 3;
int ambar = 6;
int rojo  = 8;
  
void setup(){
  pinMode(verde,OUTPUT);
  pinMode(ambar,OUTPUT);
  pinMode(rojo,OUTPUT);
}

void loop(){
  //Verde
  digitalWrite(verde,HIGH);
  delay(2000); 
  digitalWrite(verde,LOW);
  
 /*for(declarar variable ; la variable que declaramos < = 10 ; la variable ++){
		
   }
   i=0
   i=1
   i=2
   i=3
    .
    .
    .
   i=10*/
  
  for(int i = 0; i<=10; i++){
  	delay(400);
  	digitalWrite(verde,HIGH);
  	delay(400);
  	digitalWrite(verde,LOW);
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
