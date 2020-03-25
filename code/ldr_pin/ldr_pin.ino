int ldr = A0;
int ledPin = D0;

void setup() {
  // put your setup code here, to run once:
  
    Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
    pinMode(ldr, INPUT);
    

}

void loop() {
  // put your main code here, to run repeatedly:
//  int ldr = analogRead(ldrpin);
//  Serial.println(ldr);
//  delay(500);
//  int ldrStatus = analogRead(ldrPin);
  int ldrStatus = analogRead(ldr);
  if (ldrStatus <=300) {

  digitalWrite(ledPin, HIGH);
  Serial.print(ldrStatus);
  Serial.println("LDR is DARK, LED is ON");

  }

  else {

  digitalWrite(ledPin, LOW);
  Serial.println("LED is OFF");

  }

  
}
