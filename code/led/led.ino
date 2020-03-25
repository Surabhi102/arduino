 const int ledPin1 = D0;

void setup() {
  // put your setup code here, to run once:
  // put your setup code here, to run once:
  Serial.begin(9600);

pinMode(ledPin1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin1, HIGH);
}
