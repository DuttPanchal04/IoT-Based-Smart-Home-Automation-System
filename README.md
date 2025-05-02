
# 🏠 IoT Based Smart Home Automation
A Wi-Fi-enabled smart home system that controls lights and appliances remotely via smartphone or web dashboard.

# 🌟 Overview

This project demonstrates a basic smart home automation system using IoT principles. It allows users to control home appliances ( Here is Curtains ) using a smartphone via the internet. Built using ESP8266, relays, and sensors, the system can be expanded to include features like remotly operate from anywhere, wifi-based connection, etc. 

## ⚙️ Features

- 🔌 Remote control of appliances via web/mobile interface ( Blynk or Sinric Pro )
- 🌐 Wi-Fi connectivity using ESP8266
- ⚡ Real-time status monitoring of devices
- 🕒 Scheduling support (optional/extension)
- 🔐 Secure communication using basic authentication

# 🧰 Hardware Requirements

- ESP8266 NodeMCU / ESP8266 WiFi Module
- +5V Dual Channel Relay Module 
- +24V DC Motor
- +24V Switched Mode Power Supply
- +5V Adaptor
- Limit Switch ( Plunger )
- Some mechanical parts to fit curtain
- Additional wires, etc.

# 💻 Software Requirements

- Arduino IDE
- Blynk / Sinric Pro
- ESP8266 Board Package
- Git (for version control)
- Altium or Any Free PCB Design Software

# 🚀 Getting Started

1. **Clone the Repository**
   ```bash
   git clone https://github.com/DuttPanchal04/IoT-Based-Smart-Home-Automation-System
   cd IoT-Based-Smart-Home-Automation-System

2. Install the ESP8266 Board in Arduino IDE
File > Preferences > Add URL: http://arduino.esp8266.com/stable/package_esp8266com_index.json

3. Open and Upload Code

- Open smart_home.ino in Arduino IDE
- Enter your Wi-Fi SSID and Password
- Select Board: NodeMCU 1.0
- Upload the code

```
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
```
  

4. Set up the App/Web Interface

- Use Blynk/Firebase/App Inventor
- Link buttons to GPIO pins used in the code

Blynk: https://blynk.io/
Sinric Pro: https://sinric.pro/

5. Power the Hardware

- Connect NodeMCU to USB or 5V
- Plug in your relay-controlled appliances

# 📁 Documentation

- [Project Report PDF](https://github.com/DuttPanchal04/IoT-Based-Smart-Home-Automation-System/tree/main/Project%20Reports%20and%20Presentation)
- [Circuit Diagram](https://github.com/DuttPanchal04/IoT-Based-Smart-Home-Automation-System/tree/main/Schematic%20Diagram)
- [Block Diagram](https://github.com/DuttPanchal04/IoT-Based-Smart-Home-Automation-System/tree/main/Block%20Diagram)
- Refer Text Documents also for more guidance.

# Final Result

1. Controlling System With Blynk Web Interface 
https://github.com/user-attachments/assets/8fb337e2-7c03-4e46-947d-66cae6ba1204

2. Controlling System With Sinric Pro Web Interface 
https://github.com/user-attachments/assets/d603af33-eb1a-4884-9072-8a2a1aa6776b

# 🔮 Future Improvements

- Voice Assistant Integration (Alexa/Google)
- Energy Consumption Tracking
- MQTT Protocol Integration
- Mobile Notifications & Alerts

# 🤝 Contributing

Contributions, issues and feature requests are welcome!  
Feel free to fork this repo and create a pull request.

⭐ If you found this helpful, please give a star to support my work!

# 📞 Contact

- 👨‍💻 Maintained by Dutt Panchal.
- 📧 Email: dattpanchal2904@gmail.com
- 🔗 GitHub: [@DuttPanchal04](https://github.com/DuttPanchal04)
- 🔗 Linkedin: [@dattpanchal04](https://www.linkedin.com/in/dattpanchal04/)


