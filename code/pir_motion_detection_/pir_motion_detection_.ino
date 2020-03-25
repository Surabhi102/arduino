int pinpir = D1;
int buzzer = D3;
void setup() {
  // put your setup code here, to run once:
    pinMode(pinpir,INPUT);
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int pir = digitalRead(pinpir);
  Serial.println(pir);

  if(pir == LOW)
  {
    digitalWrite(buzzer, HIGH);
  }
    else if(pir == HIGH)
    {
      digitalWrite(buzzer,LOW);
    }
  

}
