// Include the library files of Blynk and ESP8266 Module
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT Serial

// Authentication token to connect Blynk with ESP8266 Wi-Fi Module
#define BLYNK_AUTH_TOKEN "" 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = ""; // SSID of Wi-Fi Network
char pass[] = ""; // Password of Wi-Fi Network

// Function to process the data which are coming from the Blynk application
BLYNK_WRITE(V0) {
  if(param.asInt()==0){
    digitalWrite(D4, LOW);
    digitalWrite(D0, HIGH);
  }
  else{
    digitalWrite(D4, HIGH);
    digitalWrite(D0, LOW);
  }
}

void setup() {
  // Set the D4 and D0 pin as a output pins   
  pinMode(D4, OUTPUT);
  pinMode(D0, OUTPUT);
  
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}


void loop() {
  Blynk.run();
}