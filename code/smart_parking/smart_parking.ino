#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
 //#include <Adafruit_Sensor.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
char auth[] = "AsX4c5SslNkSq3Q9vFgAPQwBqwr72-20";      //Your Blynk AUTH code
char ssid[] = "Surabhi";                            //wifi connection name for ESP8266
char pass[] = "12345678";
#define DHTPIN D7          // D3
#define DHTTYPE DHT11     // DHT 11
int flame = D0; 
int buzz = D1;
int led = D2;


BlynkTimer timer;






void setup() {
 pinMode(flame,INPUT);
pinMode(buzz,OUTPUT);
pinMode(led,OUTPUT);
  Blynk.begin(auth, ssid, pass);
  Blynk.notify("CONNECTED");
  

//  timer.setInterval(1000L, sendSensor);
 
  Serial.begin(9600);

}
void loop() {
 
Blynk.run();

timer.run();
  
int t = digitalRead(flame); 
  Serial.println(t); 
  if(t==0) {
    Blynk.notify(" FIRE!!!! EMERGENCY"); 
digitalWrite(buzz,HIGH);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
  }
}
