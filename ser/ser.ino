#include <Servo.h>
int irpin2 = D0;
int irpin1 = D6;
int count =0;
Servo servo;
Servo servo1;
void setup() {
  // put your setup code here, to run once:
   pinMode(irpin1, INPUT);
  // pinMode(irpin2, INPUT);
   servo.attach(D3);
   servo.attach(D4);
    //servo1.write(0);
    delay(2000);
  //timer.setInterval(1000L, sendSensor);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

   int ir1 = digitalRead(irpin1);
  if (ir1 == HIGH ) { 
    //delay(2000);  
    servo.write(90);
      delay(2000);
    Serial.print("Count Value: ");
    Serial.println(++count);
  }
  else{
    servo.write(0);
  delay(1000);
  }
//  int ir2 = digitalRead(irpin2);
//  if (ir2 == HIGH ) { 
//   /// delay(2000);  
//    servo1.write(90);
//     delay(1000);
//
//  Serial.print("Count Value: ");
//  Serial.println(--count);
//  }
//  else{
//  servo1.write(0);0
//  delay(1000);
  //}
  

}
