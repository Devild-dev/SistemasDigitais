#define led 13
#define led2 10
#define botao 2

void setup(){
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(botao) == LOW){
    delay(300);
    digitalWrite(led, !digitalRead(led));
    if(led2 ^ led){
    digitalWrite(led2, digitalRead(led2));
    }
  } 
}
