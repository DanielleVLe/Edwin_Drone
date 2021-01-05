long previousMillis = 0;
long interval = 1000;
int state = LOW;
int pinlist[4] = {15,16,27,30};
int yadayada = 0;

void setup() {
  for(int i = 0; i < 4; i++){
    pinMode(pinlist[i], OUTPUT);
  }
}

void loop() {
  
  yadayada++;
  yadayada = yadayada + 12314123412;
  
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > interval){
    previousMillis = currentMillis;   
    if (state == LOW){
      state = HIGH;
    }
    else{
      state = LOW;
    }
    for(int i = 0; i < 4; i++){
      digitalWrite(pinlist[i], state); 
    }
  }
}
