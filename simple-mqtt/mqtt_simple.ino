
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
const char* ssid = "SSID";
const char* password = "PASSWORD";
const char* mqtt_server = "IP";

WiFiClient espClient;
PubSubClient client(espClient);
int num = 0;
String var = "Pesan Ke-";

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

void reconnectmqtt() {
  while (!client.connected()) {
    Serial.print("Check . .");
    if (client.connect("ESP8266Client")) {
      Serial.println("\t Tersambung");
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
}

void loop(){
  if (!client.connected()) {
    reconnectmqtt();
  }
  
  String msg =var + String(num);
  client.loop();         
  client.publish("TOPIC", msg.c_str());
  Serial.println(msg);
  num = num+1;
  delay(1000);
}
