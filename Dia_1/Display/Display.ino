/*
  A B C D E F G
0 1 1 1 1 1 1 0
1 0 1 1 0 0 0 0
2 1 1 0 1 1 0 1
3 1 1 1 1 0 0 1
4 0 1 1 0 0 1 1
5 1 0 1 1 0 1 1
6 1 0 1 1 1 1 1
7 1 1 1 0 0 0 1
8 1 1 1 1 1 1 1
9 1 1 1 0 0 1 1
*/  
 int G = 13;
 int F = 12; 
 int A = 2;
 int B = 3;
 int E = 11;
 int D = 10;
 int C = 4; 
void segmentos(int AS, int BS , int CS, int DS, int ES, int FS, int GS){
	digitalWrite(13,GS);
    digitalWrite(12,FS);
    digitalWrite(2,AS);
    digitalWrite(3,BS);
    digitalWrite(11,ES);
    digitalWrite(10,DS);
  	digitalWrite(4,CS);
  	delay(500);
} 
void setup()
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
}

void loop()
{
  for(int i = 0; i<=9;i++){ 
    switch(i){
      case 0:
      segmentos(1,1,1,1,1,1,0);
      break;
      case 1:
      segmentos(0,1,1,0,0,0,0);
      break;
      case 2:
      segmentos(1 ,1 ,0 ,1, 1 ,0 ,1);
      break;
      case 3:
      segmentos(1 ,1 ,1 ,1 ,0 ,0 ,1);
      break;
      case 4:
      segmentos(0, 1, 1, 0, 0, 1, 1);
      break;
      case 5:
      segmentos(1, 0, 1, 1, 0, 1, 1);
      break;
      case 6:
      segmentos(1, 0, 1, 1, 1, 1, 1);
      break;
      case 7:
      segmentos(1, 1, 1, 0, 0, 0, 1);
      break;
      case 8:
      segmentos(1, 1, 1, 1, 1, 1, 1);
      break;
      case 9:
      segmentos(1, 1, 1, 0, 0, 1, 1);
      break;
    }
  }
}