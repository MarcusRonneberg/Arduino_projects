int LEDpin=13;
int waitTimeOn=1000;
int waitTimeOff=500;
void setup() {
pinMode(LEDpin,OUTPUT);

}

void loop() {
 digitalWrite(LEDpin,HIGH);
 delay(waitTimeOn);
 digitalWrite(LEDpin,LOW);
 delay(waitTimeOff);

}
