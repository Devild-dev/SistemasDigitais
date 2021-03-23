byte pinLED = 10;// declara a porta do arduino que o LED será conectado

boolean estadoLED = HIGH; //Declaro o estado do LED 0-LOW ou 1-HIGH

unsigned int periodo = 100; // Período que o LED vai piscar em milisegundos

unsigned long tempoAnterior = 0; //Tempo de inicio referencial igual a 0;

void setup() {
  pinMode(pinLED, OUTPUT);
  digitalWrite(pinLED, estadoLED);
}

void loop() {
  if((millis() - tempoAnterior) > periodo){
    estadoLED = estadoLED;
    digitalWrite(pinLED, estadoLED);
    tempoAnterior = millis();
   
  }

}
