#include<ESP8266WebServer.h>
ESP8266WebServer server;
const char username[] = "osl";
const char passward[] = "123456789";
#define pin 0
void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
Serial.begin(115200);
WiFi.softAP(username,passward);
IPAddress myIP = WiFi.softAPIP();
Serial.print("AP IP address: ");
Serial.println(myIP);
server.begin();
server.on("/led",led);
}

void loop() {
server.handleClient();
  // put your main code here, to run repeatedly:

}
void led()
{
  String myhtml = "<!DOCTYPE html><html><head><title>ESP8266WebServer</title></head><body style = \"background-color:grey\"><h1><center>IOT</center></h1><form><center><button type=\"submit\" name=\"state\" value = \"0\">LED ON</button><button type=\"submit\" name=\"state\" value = \"1\">LED OFF</button></center></form></body></html>";
  server.send(200,"text/html",myhtml);
  if(server.arg("state")== "1")
  {
    digitalWrite(pin,HIGH);
    }
    else
    {
      digitalWrite(pin,LOW);
      }
  }

