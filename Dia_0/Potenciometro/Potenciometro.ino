void setup(){
	pinMode(A5,INPUT);
  	Serial.begin(9600); //Se inicializa el Serial en 9600 baudios
}

void loop(){
	int data = analogRead(A5); // La variable data se iguala a la entrada analogica
  	Serial.println(data); // Se imprime la variable data en el monitor serial
}


