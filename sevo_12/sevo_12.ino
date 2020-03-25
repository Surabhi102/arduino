#include <Servo.h>
int irpin1 = D0;
int irpin2 = D5;
Servo servo1;
Servo servo2;
int count = 0;
void setup() {
  // put your setup code here, to run once:
 pinMode(irpin1, INPUT);
 pinMode(irpin2, INPUT);
 servo1.attach(D3);
 servo2.attach(D4); 
 servo1.write(0);
 servo2.write(0);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  int ir1 = digitalRead(irpin1);
  int ir2 = digitalRead(irpin2);
  if(ir1 == HIGH)
  {
      servo1.write(90);
      Serial.print("Count Value: ");
    Serial.println(++count);
     delay(2000);
     servo1.write(0);
  } 
  else if(ir2 == HIGH){
     servo2.write(90);
      Serial.print("Count Value: ");
    Serial.println(--count);
     delay(2000);
     servo2n.write(0);
}
}
