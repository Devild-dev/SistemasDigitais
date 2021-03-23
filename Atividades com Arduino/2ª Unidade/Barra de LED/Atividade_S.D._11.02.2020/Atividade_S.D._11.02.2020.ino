#define    clk      8
#define    latch    9
#define    data    10

void setup() {
   Serial.begin(9600);
   pinMode(clk,   OUTPUT);
   pinMode(data,  OUTPUT);
   pinMode(latch, OUTPUT); 
} 

void loop(){
  int val = analogRead(A1);
  Serial.println(val);

  if(val <= 55){
      shiftOut(data, clk, LSBFIRST,  0); 
      digitalWrite(latch,  LOW);
      digitalWrite(latch, HIGH);
  }else if((val > 55)&& (val <= 110)){
     shiftOut(data, clk, LSBFIRST, 0x1); 
     digitalWrite(latch,  LOW);
     digitalWrite(latch, HIGH);
  }else if((val > 110)&& (val <= 165)){
     shiftOut(data, clk, LSBFIRST, 0x3); 
     digitalWrite(latch,  LOW);
     digitalWrite(latch, HIGH);
  }else if((val > 165)&& (val <= 220)){
     shiftOut(data, clk, LSBFIRST, 0x7); 
     digitalWrite(latch,  LOW);
     digitalWrite(latch, HIGH);
  }else if((val > 220)&& (val <= 275)){
     shiftOut(data, clk, LSBFIRST, 0xF); 
     digitalWrite(latch,  LOW);
     digitalWrite(latch, HIGH);
  }else if((val > 275)&& (val <= 330)){
     shiftOut(data, clk, LSBFIRST, 0x1F); 
     digitalWrite(latch,  LOW);
     digitalWrite(latch, HIGH);
  }else if((val > 330)&& (val <= 385)){
     shiftOut(data, clk, LSBFIRST, 0x3F); 
     digitalWrite(latch,  LOW);
     digitalWrite(latch, HIGH);
  }else if((val > 385)&& (val <= 440)){
    shiftOut(data, clk, LSBFIRST, 0x7F); 
    digitalWrite(latch,  LOW);
    digitalWrite(latch, HIGH);
  }else {
    shiftOut(data, clk, LSBFIRST, 0xFF); 
    digitalWrite(latch,  LOW);
    digitalWrite(latch, HIGH);
  }
}
