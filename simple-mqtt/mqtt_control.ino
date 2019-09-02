
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
const char* ssid = "HES STUDIO";
const char* password = "akugaktausihkoktanyaaku";
const char* mqtt_server = "192.168.0.27";

WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi() {
  delay(10);
  Serial.print("Menyambungkan ke ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Terhubung dengan IP ESP : ");
  Serial.println(WiFi.localIP());
}

void callback(String topic, byte* payload, unsigned int length) {
  String topicLamp = "room/lamp";  
  String messageTemp;

  Serial.print(topic);
  Serial.print("\tCommand : ");
  
  for (int i = 0; i < length; i++) {
    messageTemp += (char)payload[i];
  }

  if(topic == topicLamp){
    if(messageTemp == "1"){
      digitalWrite(13, HIGH);
      Serial.print("Lamp On");
    }
    else if(messageTemp == "0"){
      digitalWrite(13, LOW);
      Serial.print("Lamp Off");
    }
  }
  Serial.println();
}

void reconnectmqtt() {
  while (!client.connected()) {
    Serial.print("Check . .");
    //Change connect() if using another device
    if (client.connect("ESP8266Client")) {
      Serial.println("Tersambung");
      client.publish("room", "Tersambung");
      client.subscribe("room/lamp");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      delay(5000);
    }
  }
}

void setup() {  
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() { 
  if (!client.connected()) {
    reconnectmqtt();
  }
  client.loop();
}
