byte pinled = 3; 
byte pinled2 = 5;
byte pinled3 = 6;
void setup() {
    Serial.begin(9600);
    pinMode (pinled,OUTPUT);
    pinMode (pinled2,OUTPUT);
    pinMode (pinled3,OUTPUT);
}
void loop() {
  int val = analogRead(A1);
  int valorAtivacao = 10;
  int valorDesativado = 40;
  
    Serial.println(val);
  
     if(val < valorAtivacao ){
              digitalWrite (pinled, HIGH);
              digitalWrite (pinled2, HIGH);
              digitalWrite (pinled3, HIGH);
              Serial.println("ativados");    
      }else if(val > valorDesativado ) {
              digitalWrite(pinled, LOW);
              digitalWrite (pinled2, LOW);
              digitalWrite (pinled3, LOW);
              Serial.println("desativados"); 
         }else if ((val > valorAtivacao) && (val < valorDesativado)){
              digitalWrite(pinled, LOW);
              digitalWrite (pinled2, LOW);
              digitalWrite (pinled3, LOW);
              Serial.println("Esterese"); 
          }
          delay(800);
}
