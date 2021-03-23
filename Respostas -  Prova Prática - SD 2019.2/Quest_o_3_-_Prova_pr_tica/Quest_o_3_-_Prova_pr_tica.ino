byte pinLed1 = 3, pinLed2 = 10;
boolean estadoLed1 = LOW, estadoLed2 = LOW;
unsigned int periodo1 = 500, periodo2 = 167;
unsigned long tempoAnterior1 = 0, tempoAnterior2 = 0;

void setup() {
  pinMode(pinLed1, OUTPUT);
  digitalWrite(pinLed1, estadoLed1);
  pinMode(pinLed2, OUTPUT);
  digitalWrite(pinLed2, estadoLed2);
}

void loop() {
  if((millis() - tempoAnterior1) > periodo1){
    estadoLed1 = !estadoLed1;
    digitalWrite(pinLed1, estadoLed1);
    tempoAnterior1 = millis();
  }
  if((millis() - tempoAnterior2) > periodo2){
    estadoLed2 = !estadoLed2;
    digitalWrite(pinLed2, estadoLed2);
    tempoAnterior2 = millis();
  }

}
