byte pinLED = 3, pinLED2 = 10;
boolean estadoLED = HIGH, estadoLED2 = LOW;
unsigned int periodo = 500, periodo2 = 500;
unsigned long tempoAnterior = 0, tempoAnterior2 = 0;

void setup() {
  pinMode(pinLED, OUTPUT);
  digitalWrite(pinLED, estadoLED);
  pinMode(pinLED2, OUTPUT);
  digitalWrite(pinLED2, estadoLED2);
}

void loop() {
  if((millis() - tempoAnterior) > periodo){
    estadoLED = !estadoLED;
    digitalWrite(pinLED, estadoLED);
    tempoAnterior = millis();
  }
  if((millis() - tempoAnterior2) > periodo2){
    estadoLED2 = !estadoLED2;
    digitalWrite(pinLED2, estadoLED2);
    tempoAnterior2 = millis();
  }

}
