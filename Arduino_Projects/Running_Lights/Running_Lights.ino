
int RedLED=6;
int YellowLED1=5;
int YellowLED2=4;
int YellowLED3=3;
int GreenLED=2;
int OnTime=200;
int OffTime=600;

void setup() {
  // put your setup code here, to run once:
pinMode(RedLED,OUTPUT);
pinMode(YellowLED1,OUTPUT);
pinMode(YellowLED2,OUTPUT);
pinMode(YellowLED3,OUTPUT);
pinMode(GreenLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RedLED,HIGH);
delay(OnTime);
digitalWrite(RedLED,LOW);
delay(OffTime);
digitalWrite(YellowLED1,HIGH);
delay(OnTime);
digitalWrite(YellowLED1,LOW);
delay(OffTime);
digitalWrite(YellowLED2,HIGH);
delay(OnTime);
digitalWrite(YellowLED2,LOW);
delay(OffTime);
digitalWrite(YellowLED3,HIGH);
delay(OnTime);
digitalWrite(YellowLED3,LOW);
delay(OffTime);
digitalWrite(GreenLED,HIGH);
delay(OnTime);
digitalWrite(GreenLED,LOW);
delay(OffTime);

}
