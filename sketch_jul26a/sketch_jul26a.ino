int led = D1;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);//to comunicate to the machine
}

void loop() {
  // put your maine  code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
}
