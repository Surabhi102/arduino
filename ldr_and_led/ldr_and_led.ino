const int ledPin1 = D0;
//const int ledPin2 = D2;
//const int ledPin3 = D5;
//const int ledPin4 = D6;
const int ldrPin = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

pinMode(ledPin1, OUTPUT);
//pinMode(ledPin2, OUTPUT);
//pinMode(ledPin3, OUTPUT);
//pinMode(ledPin4, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrStatus = analogRead(ldrPin);
Serial.println(ldrStatus);
  if (ldrStatus <= 300) {

  digitalWrite(ledPin1, HIGH);
//  digitalWrite(ledPin2, HIGH);
//  digitalWrite(ledPin3, HIGH);
//  digitalWrite(ledPin4, HIGH);
  Serial.print(ldrStatus);
  Serial.println("LDR is DARK, LED is ON");

  }

  else {

  digitalWrite(ledPin1, LOW);
//  digitalWrite(ledPin2, LOW);
//  digitalWrite(ledPin3, LOW);
//  digitalWrite(ledPin4, LOW);
  Serial.println("LED is OFF");
  

  }

}
