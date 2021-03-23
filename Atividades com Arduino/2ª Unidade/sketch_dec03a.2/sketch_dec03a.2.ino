unsigned int periodo = 500;
unsigned long tempoAnterior = 0;

byte pinLed = 3;
const byte interruptPin = 2;
volatile boolean  estadoLed = LOW;
void desligaAlarme();

void setup() {
  Serial.begin(9600);
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, estadoLed);
  attachInterrupt(digitalPinToInterrupt(interruptPin), desligaAlarme, FALLING);
}

void loop() {
  //Serial.println(contPulso);
  int val = analogRead(A0);
  Serial.println(val);
 

    Blink();
   
 }

 void desligaAlarme(){
  estadoLed = LOW;
  }

  void Blink(){
  if((millis() - tempoAnterior) > periodo){
    estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed);
    tempoAnterior = millis();
    }
  
  }
