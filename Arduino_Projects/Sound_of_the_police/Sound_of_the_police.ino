int RedLED=3;
int BlueLED=2;
int OnTime1=100;
int OffTime1=50;
int OnTime2=200;
int OffTime2=100;

void setup() {
  // put your setup code here, to run once:
pinMode(BlueLED,OUTPUT);
pinMode(RedLED,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(BlueLED,HIGH);
delay(OnTime1);
digitalWrite(BlueLED,LOW);
delay(OffTime1);

digitalWrite(RedLED,HIGH);
delay(OnTime2);
digitalWrite(RedLED,LOW);
delay(OffTime2);
}
