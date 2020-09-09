#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Socket.h"
#include<math.h>

void main()
{
	char* serverIp = "116.193.72.106";
	int port = 80;
	Socket_Client_Init(serverIp,port);
	char* msgreq = "GET /2.jpg HTTP/1.1\r\nHost: mainhan.tk\r\n\r\n";
	Send(msgreq);
	int dem = 0;
	char header[500] = { 0 };
	// nhan file header  
	while(1)
	{
		Recv(&header[dem], 1);
		if (dem >3)
		{
			if ((header[dem] == '\n') && (header[dem - 1] == '\r') && (header[dem - 2] == '\n') && (header[dem - 3] == '\r'))
			{
				break;
			}
		}
		dem++;
	}
	printf("[data header from sever amazon]:\r\n %s", header);
	// tach do dai file image trong header (xu ly chuoi)
	// Content-Length: 70572
	char* titleadd = strstr(header, "Content-Length") + strlen("Content-Length") + 2;
	printf("do dai title : %d\r\n", sizeof("Content-Length"));
	printf("dia chi sizefile : %x\r\n", titleadd);
	printf("dia chi content-length : %x\r\n", strstr(header, "Content-Length"));
	int dem1 = 0;
	char sizefile[9] = {0};
	while(1)
	{
		if (titleadd[dem1] == '\r')
		{
			break;
		}
		sizefile[dem1] = titleadd[dem1];
		dem1++;
	}
	printf("[length-file type char]:%s\r\n", sizefile);
	// dua 70572 ve kieu int
	int sizef = 0;
	int i = 0;
	for (i = 0; i < strlen(sizefile); i++)
	{
		sizef += (sizefile[i] - 48)*pow(10, strlen(sizefile) - 1 - i);
	}
	printf("[length - file type  int ] : %d\r\n", sizef);
	//luu file anh vao mot file trong may
	FILE* imgs = fopen("client1.jpg", "a+b");
	int j = 0;
	char data = 0;
	for (j = 0; j < sizef; j++)
	{
		Recv(&data, 1);
		fputc(data, imgs);
	}
	printf("[receive and copy to imgs is successed]\r\n");
	fclose(imgs);
}
