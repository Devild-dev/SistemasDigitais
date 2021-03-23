
const byte interruptPin = 2;
volatile unsigned long contPulso = 0;

void setup() {
  Serial.begin(9600);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), contInterrupcao, FALLING);
}

void loop() {
  Serial.println(contPulso);
  }

 void contInterrupcao(){
  contPulso++;
  }
