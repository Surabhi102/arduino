#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "wHImiZucpQx41gslzbxNqepXL_QHQQw0";      //Your Blynk AUTH code
char ssid[] = "surabhi";                            //wifi connection name for ESP8266
char pass[] = "12345678";                            //wifi connection password for ESP8266

int led = D1;
int ldr = A0;
int m2;

void setup()
{
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

    pinMode(led,OUTPUT);
    Blynk.notify("CONNECTED");
 }

void loop()
{
  Blynk.run();
  int ldrval = analogRead(ldr);
  Blynk.virtualWrite(V2, ldrval);
  if(ldrval <=500)
  {
    Blynk.notify("Brightness Low");
  }
  if(m2 == HIGH)
  {
    digitalWrite(led,HIGH);
  }

  else
  {
    digitalWrite(led,LOW);
  }
}

BLYNK_WRITE(V1)
{
m2 = param.asInt(); // assigning incoming value from pin V1 to a variable
}
