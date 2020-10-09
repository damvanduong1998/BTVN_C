#include<stdio.h>
#include"Socket.h"
#include<Windows.h>

WINAPI Ham_thuc_thi(LPVOID IpThreadPrameter)
{
	char buff_recv[256] = { 0 };
	while (1)
	{
		Recv(buff_recv, sizeof(buff_recv));
		printf("%s\r\n", buff_recv);
		memset(buff_recv, 0, 256);
		Sleep(1000);
	}

}

void main()
{
	char buff_send[256] = { 0 };
	Socket_Client_Init("127.0.0.1", 8888);
	CreateThread(NULL, 512, Ham_thuc_thi, NULL, NULL, NULL);
	//HANDLE Thread_sub = CreateThread(NULL, 512, Ham_thuc_thi, NULL, NULL, NULL);
	while (1)
	{
		fgets(buff_send, sizeof(buff_send), stdin);
		Send(buff_send);
		memset(buff_send, 0, sizeof(buff_send));
		Sleep(1000);
	}


}
