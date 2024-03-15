int GreenLED=6;
int OnTime=500;
int OffTime=500;


void setup() {
  // put your setup code here, to run once:
pinMode(GreenLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(GreenLED,HIGH);
delay(OnTime);
digitalWrite(GreenLED,LOW);
delay(OffTime);
}
