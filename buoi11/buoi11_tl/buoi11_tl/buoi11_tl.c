#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Socket.h"
#include<string.h>

int sosanhstr(char *a, char *b)
{
	int i = 0;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}

void main()
{
	char *buff_recie;
	char *meg;
	buff_recie = (char*)malloc(250 * sizeof(char));
	meg = (char*)malloc(250 * sizeof(char));
	char out[] = "exitchat";
	Socket_Server_Init(8888);
	listen(s, 5); //Toi da 5 backlog trong hang doi
	SOCKET cl = accept(s, NULL, NULL);
	send(cl, "muon thoat soan : exitchat \r\n", 30, 0);
	while (1)
	{
		// doc data tu client
		memset(buff_recie, 0, 250);
		recv(cl, buff_recie, 250, 0);
		printf("[data]: %s\r\n", buff_recie);
		//memset(buff_recie, 0, 250);
		

		// doc data tu server
		printf("[data form server]:\r\n");
		memset(meg, 0, 250);
		gets(meg);
		printf("\r\n");
		send(cl, meg, strlen(meg),0);
		send(cl, "\r\n", 5, 0);
		//memset(meg, 0, 250);
		if (sosanhstr(out, buff_recie) == 1 && sosanhstr(out, meg) == 1)
		{
			break;
		}
	}
	free(buff_recie);
	free(meg);
	
}
/*char mes[] = "HTTP/1.1 200 OK\r\nContent-Length: 6\r\n\r\nduong\r\n\r\n";
		send(cl, mes, 9, 0);*/