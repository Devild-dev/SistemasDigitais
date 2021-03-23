int degrau = 94;
unsigned int numAcesos;
unsigned int numApagados;
byte dataPin = 7;   // pino 14
byte clockPin = 8; // pino 11
byte latchPin = 9; // pino 12

void setup() {
Serial.begin(9600);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);
pinMode(latchPin, OUTPUT);
}

void loop() {
 int tensao = analogRead(A0);
 calcularAcesos(tensao);
 atualizaLeds(); 
 Serial.println(tensao);
 delay(500);
}



void atualizaLeds(){

  digitalWrite(latchPin,LOW);

  // definir acessos
  digitalWrite(dataPin,HIGH);
  for( byte iterator = 1; iterator <= numAcesos ;iterator++){
     digitalWrite(clockPin, LOW);
     digitalWrite(clockPin, HIGH);
  }
  // definr apagados
  digitalWrite(dataPin,LOW);
  for( byte iterator = 1; iterator <= numApagados ;iterator++){
     digitalWrite(clockPin, LOW);
     digitalWrite(clockPin, HIGH);
  } 
  digitalWrite(latchPin,HIGH);

}


void calcularAcesos(int tensao){
  if (tensao < 95){
    numAcesos = 0;
    numApagados = 8;
  }else if(tensao >= 950){
    numAcesos = 8;
    numApagados = 0;
  }else{
    numAcesos = (((tensao)/94) - 1);
    numApagados = numAcesos - 8;
  }  
 }

 


 //escuro = 0,2 - monitor serial = 100
//claro = 4
//ambiente = 1,5 - monitor serial = 950
