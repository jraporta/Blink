unsigned long prevtime=0,actualtime;
int led_how_is=1;

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN,HIGH);
}

void loop(){  
  actualtime=millis();
  if (actualtime-prevtime>=1000){
    led_how_is = 1 - led_how_is;
    digitalWrite(LED_BUILTIN,led_how_is);
    prevtime=actualtime;
  }
}