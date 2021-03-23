byte red = 3;
byte green = 5;
byte blue = 6;

void setup() {
// Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop() {
int potenc_00; // red
int potenc_01; // green
int potenc_02; // blue

 potenc_00 = analogRead(A0);
 potenc_01 = analogRead(A2);
 potenc_02 = analogRead(A5);

// Serial.println(potenc_00);
//Serial.println(potenc_01);
//Serial.println(potenc_02);
// delay(1000);

 analogWrite(red, potenc_00 / 4);
 analogWrite(green, potenc_01 / 4);
 analogWrite(blue, potenc_02 / 4);
  
}
