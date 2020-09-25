#include "WiFiClient.h"
#include "ESP8266WiFi.h"
// note : doi board NodeMCU 1.0(ESP-12E Module)

HardwareSerial Log(UART0); // ham tao co doi so su dung uart0;
ESP8266WiFiClass wifi;
WiFiClient socket;

void setup() {
  // put your setup code here, to run once:
    Log.begin(9600);
    Log.printf("say hello form ESP8266\r\n");
    wifi.begin("mèo méo meo mèo meo !!!!!!!!!","bat3gmadung");
    while(!wifi.isConnected())
    {
     Log.print("-");
      delay(1000);
    }
    Log.printf("wifi is conected\r\n");
    Log.println(wifi.localIP());
    socket.connect("192.168.5.103",8888);
    char* msg = "hello ban oi\r\n";
    socket.write(msg,strlen(msg));
}
void loop() {
  // put your main code here, to run repeatedly:

}
