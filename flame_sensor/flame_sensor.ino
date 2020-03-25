
int flame = D0; 
int buzz = D1;
int led = D2;

void setup() {
  Serial.begin(9600);
  
pinMode(flame,INPUT);
pinMode(buzz,OUTPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int t = digitalRead(flame); 
  Serial.println(t); 
  if(t==1) { 
digitalWrite(buzz,HIGH);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
}
}
