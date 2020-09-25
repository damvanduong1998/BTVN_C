#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"person.h"

void ttcanhan::nhap()
{
	printf("nhap ho va ten: \r\n");
	getchar();
	gets_s(this->hoten);
	//fgets(this->hoten,sizeof(this->hoten),stdin);
	do {
		printf("nhap gioi tinh: 0- nam , 1 -  nu , 2 - unknow\r\n");
		scanf("%d", &this->gt);
		if (this->gt > 2 || this->gt < 0)
		{
			printf("chu y nhap dung format o tren\r\n");
		}
	} while (this->gt > 2 || this->gt < 0);
	
	//fgets(this->gt, sizeof(this->gt), stdin);
	printf("nhap tuoi: \r\n");
	scanf("%d", &this->tuoi);
	fflush(stdin);
}
void ttcanhan::xuat()
{
	printf("ho va ten : %s\r\n", this->hoten);
	printf("tuoi : %d\r\n", this->tuoi);
	if (gt == nam)
	{
		printf("gioi tinh : nam %s\r\n");
	}
	else if (gt == nu)
	{
		printf("gioi tinh : nu %s\r\n");
	}
	else if (gt == unknow)
	{
		printf("gioi tinh : unknow %s\r\n");
	}
	
}
void nhapX(ttcanhan a[], int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("nhap thanh vien thu %d\r\n", i + 1);
		a[i].nhap();
	}
}
void xuatX(ttcanhan a[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("thanh vien thu %d\r\n", i + 1);
		a[i].xuat();
	}
}