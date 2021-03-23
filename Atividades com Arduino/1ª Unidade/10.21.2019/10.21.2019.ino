byte pinLED = 3;
byte luminosidade = 0;

void setup() {
pinMode (pinLED, OUTPUT);
}

void loop() {
  
for(luminosidade = 1; luminosidade < 256; luminosidade += 10){
  analogWrite (pinLED, luminosidade);
  delay(800);
  }
}
