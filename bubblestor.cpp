vchar lebarray[9]={2,3,4,5,6,7,8,9,10};

void setup() { 
  for(int i=0;i<=9;i++){
    pinMode(lebarray[i], OUTPUT);
  }

}

void loop() {
  for(int i=0;i<=9;i++){
    forLoopLED(lebarray[i],200);
  }
  for(int i=9;i>=0;i--){
    digitalWrite(lebarray[i], HIGH);
      delay(200);
    digitalWrite((lebarray[i]), LOW);
      delay(200);
  }
 
}

void forLoopLED(int pin, int duration){
    digitalWrite(pin,HIGH);
    delay(duration);
    digitalWrite(pin,LOW);
    delay(duration);
}