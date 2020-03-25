#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "cTnz1_Mw1TdVtyAWf3D4fZsKcclRbcEc";      //Your Blynk AUTH code
char ssid[] = "surabhi";                            //wifi connection name for ESP8266
char pass[] = "12345678";

int irpin1 = D0;
int irpin2 = D5;
int led1 = D1;
int led2 = D6;
int button = D2;
int ldr = A0;
//int m2;

void setup() {
  // put your setup code here, to run once:
  pinMode(irpin1, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(irpin2, INPUT);
  pinMode(ldr, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT);
  Blynk.begin(auth, ssid, pass);
  Blynk.notify("CONNECTED");
  Serial.begin(9600);

}

void loop() {
  Blynk.run();
  int ldrval = analogRead(ldr);
  Blynk.virtualWrite(V1, ldrval);
  if (ldrval >= 500)
  {
    Blynk.notify("It's Morning");
  }
  else
  {
    Blynk.notify("It's Night");
  }
  int butval = digitalRead(button);
  Serial.println(butval);
  Blynk.virtualWrite(V3, butval);
  if (butval == HIGH)
  {
    Blynk.notify("EMERGENCY!!!!!!");
  }

  int ir1 = digitalRead(irpin1);
  if (ir1 == HIGH)
  {
    digitalWrite(led1, HIGH);
    //Serial.println(ir1);
  }
  else
  {
    analogWrite(led1, 30);
    //Serial.println(ir1);
  }
  int ir2 = digitalRead(irpin2);
  if (ir2 == HIGH)
  {
    digitalWrite(led2, HIGH);
    //Serial.println(ir2);
  }
  else
  {
    analogWrite(led2, 30);
    //Serial.println(ir2);
  }

}

