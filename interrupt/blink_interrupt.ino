//MKR100 pins usable for interrupts:
//0, 1, 4, 5, 6, 7, 8, 9, A1, A2
//I discard nº6 as it will be used as output (led)

const int interruptPin=7 , outputPin=4;

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(outputPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin),toggle,CHANGE);
}

void loop(){  
  digitalWrite(outputPin,HIGH);
  delay(1000);
  digitalWrite(outputPin,LOW);
  delay(1000);
}

void toggle(){
  digitalWrite(LED_BUILTIN, digitalRead(interruptPin));
}
