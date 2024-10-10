void setup(){
    pinMode(LED_BUILTIN, OUTPUT);//LED_BUILTIN pin is by default pin no. 13 
}

void loop(){
    digitalWrite(LED_BUILTIN,HIGH); //HIGH is to turn on LED
    delay(1000); //delay is use to stop that for (1000 = 1 Second)
    digitalWrite(LED_BUILTIN,LOW); //LOW is to turn OFF LED
    delay(1000);
}
/*
Use this code this work without any delay 

const int ledPin =  13;
int ledState = LOW;            
long previousMillis = 0;        
long interval = 1000;
void setup() {
  pinMode(ledPin, OUTPUT);      
}
 
void loop()
{
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;   
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;
    digitalWrite(ledPin, ledState);
  }
}
*/
