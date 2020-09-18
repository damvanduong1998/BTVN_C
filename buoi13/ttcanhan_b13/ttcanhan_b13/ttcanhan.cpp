#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"ttcanhan.h"

void ttcanhan::nhap()
{
	printf("nhap ho va ten: \r\n");
	getchar();
	gets_s(this->hoten);
	//fgets(this->hoten,sizeof(this->hoten),stdin);
	printf("nhap gioi tinh: \r\n");
	gets_s(this->gt);
	//fgets(this->gt, sizeof(this->gt), stdin);
	printf("nhap tuoi: \r\n");
	scanf("%d", &this->tuoi);
	fflush(stdin);
}
void ttcanhan::xuat()
{
	printf("ho va ten : %s\r\n", this->hoten);
	printf("tuoi : %d\r\n", this->tuoi);
	printf("gioi tinh : %s\r\n", this->gt);
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