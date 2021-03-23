byte bit0;
byte bit1;
byte bit2;
byte a0_Pin = 7;
byte a1_Pin = 8;
byte a2_Pin = 9;
byte le_Pin;
byte mr_Pin;
byte pos;

void setup() {
  pinMode(bit0, OUTPUT);
  pinMode(bit1, OUTPUT); 
  pinMode(bit2, OUTPUT); 
  pinMode(a0_Pin, OUTPUT);
  pinMode(a1_Pin, OUTPUT);
  pinMode(a2_Pin, OUTPUT);
  pinMode(le_Pin, OUTPUT);
  pinMode(mr_Pin, OUTPUT);
  }

void loop() {
  for(pos = 0; pos <=7; pos++){
    digitalWrite(a0_Pin, (pos & 1));
    digitalWrite(a1_Pin, (pos & 2));
    digitalWrite(a2_Pin, (pos & 4));
    delay(200);
    }
  
}
