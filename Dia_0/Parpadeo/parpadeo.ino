void setup(){
	pinMode(13,OUTPUT); //se le declara al arduino que se va atrabajar con el pin 13 
}

void loop(){
	digitalWrite(13,HIGH);//se escribe una salida en el pin 13 igualada a 1
  	delay(100); //espera 100ms
  	digitalWrite(13,LOW); //se escribe una salida en el pin 13 igualada a 0
  	delay(100); //espeta 100ms
}


