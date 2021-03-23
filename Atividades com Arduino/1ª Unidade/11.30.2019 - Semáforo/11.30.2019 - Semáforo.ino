byte pinLedGreen = 3; 
byte pinLedYellow = 5; 
byte pinLedRed = 6; 

void setup() {
 pinMode (pinLedGreen, OUTPUT);
 pinMode (pinLedYellow, OUTPUT);
 pinMode (pinLedRed, OUTPUT);
}

void loop() {
  analogWrite (pinLedGreen, 255);
  analogWrite (pinLedYellow, 0);
  analogWrite (pinLedRed, 0);
  delay(5000);
  analogWrite (pinLedGreen, 0);
  delay(1);
  analogWrite (pinLedYellow, 255);
  analogWrite (pinLedGreen, 0);
  analogWrite (pinLedRed, 0);
  delay(2000);
  analogWrite (pinLedYellow, 0);
  delay(1);
  analogWrite (pinLedRed, 255);
  analogWrite (pinLedGreen, 0);
  analogWrite (pinLedYellow, 0);
  delay(5000);
  analogWrite (pinLedRed, 0);
  delay(1);
  
}
      
