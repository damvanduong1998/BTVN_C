#include "WiFiClient.h"
#include "ESP8266WiFi.h"

ESP8266WiFiClass wifi;
HardwareSerial Log(UART0);
uint8_t Data_rev[256]={0};
uint8_t DataON[]="ON";
uint8_t DataOFF[]="OFF";
int DataSize =0;
WiFiClient socket_client_tcp;
// ham so sanh chuoi 
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

void setup() {
 pinMode(2,OUTPUT);
 Log.begin(9600);
 Log.printf("log uart was connected \r\n");
 wifi.begin("mèo méo meo mèo meo !!!!!!!!!","bat3gmadung");
 while(!wifi.isConnected())
 {
  Log.print(".");
  delay(1000);
 }
 Log.printf("wifi is connected\r\n");
 Log.println(wifi.localIP());
 socket_client_tcp.connect("192.168.5.103",8888);
 char msg[]="xin chao server\r\n";
 socket_client_tcp.write(msg,sizeof(msg));
}

void loop() {
  DataSize = socket_client_tcp.available();
  if(DataSize>0)
  {
    socket_client_tcp.read(Data_rev,sizeof(Data_rev));
    Log.printf("Data from sever : %s\r\n",Data_rev);
    if(sosanh(Data_rev,DataON)==1)
    {
      digitalWrite(2,0);
      socket_client_tcp.write("da bat den\r\n",sizeof("da bat den\r\n"));
    }
    else if(sosanh(Data_rev,DataOFF)==1)
    {
      digitalWrite(2,1);
      socket_client_tcp.write("da tat den\r\n",sizeof("da tat den\r\n"));
    }
    memset((char *)Data_rev,0,strlen((char *)Data_rev));
  }
}
