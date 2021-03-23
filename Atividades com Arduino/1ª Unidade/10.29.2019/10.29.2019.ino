byte pinled = 3; 
void setup() {
    Serial.begin(9600);
    pinMode (pinled, OUTPUT);
}
void loop() {
  int val = analogRead(A1);
   Serial.println(val);
  int valorAtivacao = 10;
  int valorDesativado = 40;
  
       if(val < valorAtivacao ){
          digitalWrite (pinled, HIGH);
          Serial.println("ativado");    
      }else if(val > valorDesativado ) {
          digitalWrite(pinled, LOW);
          Serial.println("desativado"); 
         }else {
          Serial.println("Esterese");
          }
         delay(800);
}
