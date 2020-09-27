#include "WiFiClient.h"
#include "ESP8266WiFi.h"
// note : doi board NodeMCU 1.0(ESP-12E Module)

HardwareSerial Log(UART0); // ham tao co doi so su dung uart0;
ESP8266WiFiClass wifi;
WiFiClient socket;
uint8_t  DataOn[]="ON";
uint8_t  DataOff[]="OFF";
uint8_t  Data_rev[256]= {0};
void setup() {
    pinMode(2,OUTPUT);
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
int sosanh(uint8_t *a,uint8_t *b)
{
  int n =0;
  if(strlen((char *)a)>=strlen((char *)b))
  {
    n = strlen((char *)b);
  }
  else
  {
    n = strlen((char *)a);
  }
  int i =0;
  for(i=0;i<n;i++)
  {
    if(a[i]!=b[i])
    {
      return 0;
    }
  }
  return 1;
}
void loop() {
  int DataSize =0;
  if((DataSize = socket.available())>0)
  {
    socket.read(Data_rev, DataSize);
    Log.printf("data from server : %s\r\n",Data_rev);
    if(sosanh(Data_rev,DataOn)==1)
    {
      digitalWrite(2,0);
    }
    else if(sosanh(Data_rev,DataOff)==1)
    {
      digitalWrite(2,1);
    }
    memset((char *)Data_rev,0,strlen((char *)Data_rev));
  }
  
}
