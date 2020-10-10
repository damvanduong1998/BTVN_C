#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Socket.h"

void main()
{
	char* severIp = "192.168.19.101";
	int port = 1234;
	Socket_Client_Init(severIp,port);
	Send("ON\r\n ");

	char buff[32] = { 0 };
	Recv(buff, sizeof(buff));
	printf("[data form sever] : %s\r\n", buff);
}
