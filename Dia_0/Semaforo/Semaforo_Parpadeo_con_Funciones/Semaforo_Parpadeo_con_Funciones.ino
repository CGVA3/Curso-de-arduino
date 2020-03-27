int verde = 3;
int ambar = 6;
int rojo  = 8;

void parpadeo(int var, int time){
	delay(time);
  	digitalWrite(var,HIGH);
  	delay(time);
  	digitalWrite(var,LOW);
}
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
 
 //Parpadeo
  parpadeo(verde,200);
  parpadeo(3,200);
  
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
