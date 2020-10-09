#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

WINAPI Ham_thuc_thi(LPVOID IpThreadPrameter)
{

	while (1)
	{
		printf("[task1] Say hello\r\n");
		Sleep(1000);
	}

}

void main()
{
	CreateThread(NULL, 512, Ham_thuc_thi, NULL, NULL, NULL);
	//HANDLE Thread_sub = CreateThread(NULL, 512, Ham_thuc_thi, NULL, NULL, NULL);
	while (1)
	{
		printf("[task2] Xin chao\r\n");
		Sleep(1000);
	}


}
