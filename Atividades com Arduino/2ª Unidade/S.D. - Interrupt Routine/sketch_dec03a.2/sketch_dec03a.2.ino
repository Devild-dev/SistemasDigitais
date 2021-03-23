byte pinLed = 3;
const byte interruptPin = 2;
volatile boolean  estadoLed= LOW;

void setup() {
  Serial.begin(9600);
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), desligaAlarme, FALLING);
}

void loop() {
  //Serial.println(contPulso);
  int val = analogRead(A1);
  Serial.println(val);
  if(val < 100){
    estadoLed = HIGH;
    }
    digitalWrite(pinLed, estadoLed);
  }

 void desligaAlarme(){
  estadoLed = LOW;
  }
