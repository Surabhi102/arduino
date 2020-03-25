int pinpir = D2;
int buzzer = D3;
int button = D4;
void setup() {
  // put your setup code here, to run once:
    pinMode(pinpir,INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(button, INPUT);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int pir = digitalRead(pinpir);
  Serial.println(pir);

  if(pir == HIGH && button== HIGH)
  {
    digitalWrite(buzzer, HIGH);
  }
    else if(pir == LOW && button== HIGH)
    {
      digitalWrite(buzzer,LOW);
    }
  

}
