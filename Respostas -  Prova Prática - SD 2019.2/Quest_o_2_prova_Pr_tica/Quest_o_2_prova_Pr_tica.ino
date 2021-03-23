byte pinLed = 3; 
boolean estadoLed = LOW;
unsigned int periodo = 1000;
unsigned long tempoAnterior = 0;

void setup() {
    Serial.begin(9600);
    pinMode (pinLed, OUTPUT);
    digitalWrite(pinLed, estadoLed);
}
void loop() {
  int val = analogRead(A1);
  int intensidade = 35;
       
       Serial.println(val);
       
       if(val < intensidade){
            if((millis() - tempoAnterior) > periodo){
                estadoLed = !estadoLed;
                digitalWrite(pinLed, estadoLed);
                tempoAnterior = millis();
            }      
      }else if((val > (intensidade + 5)) && (val < (intensidade + 25))) {
              if((millis() - tempoAnterior) > (periodo - 150)){
                estadoLed = !estadoLed;
                digitalWrite(pinLed, estadoLed);
                tempoAnterior = millis();
              }
         }else if((val >= (intensidade + 25)) && (val <= (intensidade + 65))){    
               if((millis() - tempoAnterior) > (periodo - 300)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                  }
         }else if((val >= (intensidade + 65))&&(val <=(intensidade + 85))){
                  if((millis() - tempoAnterior) > (periodo - 400)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if((val >= (intensidade + 85))&&(val <=(intensidade + 115))){
                  if((millis() - tempoAnterior) > (periodo - 400)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if((val >= (intensidade + 115))&&(val <=(intensidade + 145))){
                  if((millis() - tempoAnterior) > (periodo - 700)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if((val >= (intensidade + 145))&&(val <=(intensidade + 175))){
                  if((millis() - tempoAnterior) > (periodo - 500)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if((val >= (intensidade + 175))&&(val <=(intensidade + 205))){
                  if((millis() - tempoAnterior) > (periodo - 800)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if((val >= (intensidade + 205))&&(val <=(intensidade + 300))){
                  if((millis() - tempoAnterior) > (periodo - 850)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if((val >= (intensidade + 300))&&(val <=(intensidade + 350))){
                  if((millis() - tempoAnterior) > (periodo - 900)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if((val >= (intensidade + 350))&&(val <=(intensidade + 450))){
                  if((millis() - tempoAnterior) > (periodo - 950)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }else if(val >= (intensidade + 450)){
                  if((millis() - tempoAnterior) > (periodo - 970)){
                 estadoLed = !estadoLed;
                 digitalWrite(pinLed, estadoLed);
                 tempoAnterior = millis();
                }
         }
}
