int irpin1 = D1;
int led1 = D0;
void setup() {
  // put your setup code here, to run once:
  pinMode(irpin1, INPUT);
  pinMode(led1, OUTPUT);
   Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 int ir1 = digitalRead(irpin1);
  if (ir1 == HIGH)
  {
    digitalWrite(led1, HIGH);
    Serial.println(ir1);
  }
  else
  {
    analogWrite(led1, 30);
    //Serial.println(ir1);
  }
}
