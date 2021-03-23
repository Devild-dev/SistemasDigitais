byte pinled = 6; // cria a variável pinled e insere no pino PWM ~6
void setup() {
 pinMode (pinled, OUTPUT); //modo da variável OUTPUT
}
void loop() {
  analogWrite (pinled, 255); // escreve na variável 100% da porta PWM = 256-1 
}
             
