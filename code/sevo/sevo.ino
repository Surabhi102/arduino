

#include <Servo.h>
int irpin1 = D0;
//int irpin2 = D5;
int angle = 0;
 int count =0;
Servo servo;
//Servo servo1;
void setup() {
  // put your setup code here, to run once:
 pinMode(irpin1, INPUT);
   servo.attach(D4);
    //servo1.attach(D4);
  // servo1.write(0);
   //servo.write(0);
   delay(2000);
  //timer.setInterval(1000L, sendSensor);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  timer.run();
  
  int ir1 = digitalRead(irpin1);
  if (ir1 == HIGH ) { 
    delay(2000);  
    servo.write(90);
      delay(1000);
    Serial.print("Count Value: ");
    Serial.println(++count);
  }
  else{
    servo.write(0);
  delay(1000);
  }

  

}
