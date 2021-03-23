void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}


void escreve_barra16(byte numAcesos) {
  // Preenche a barra com o números de leds passado como parâmetro,
  // na ordem Q0 --> Qn.
  if (numAcesos > 16) {numAcesos = 16;}
  // Garante o bloqueio dos dados
  digitalWrite(LATCH_pin, LOW);

  // Transfere cada bit ao registrados de deslocamento
  byte numApagados = 16 - numAcesos;

  // Envia zeros para os LEDs apagados
  digitalWrite(DATA_pin, 0);
  for (byte shift = 1; shift <= numApagados; shift++) {
    digitalWrite(CLOCK_pin, LOW);
    digitalWrite(CLOCK_pin,HIGH);
  }
  
  // Envia uns para os LEDs acesos
  digitalWrite(DATA_pin, 1);
  for (byte shift = 1; shift <= numAcesos; shift++) {
    digitalWrite(CLOCK_pin, LOW);
    digitalWrite(CLOCK_pin, HIGH);
  }
 
  // Transfere os dados ao registrador de saída
  digitalWrite(LATCH_pin, HIGH);
}
