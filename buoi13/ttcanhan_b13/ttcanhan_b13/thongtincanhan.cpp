#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"ttcanhan.h"


void main()
{
	ttcanhan a[50];
	int n;
	do {
		printf("nhap so luong thanh vien khong qua 50 tv: \r\n");
		scanf("%d", &n);
		if (n <= 0 || n >= 50)
		{
			printf("nhap sai \r\n");
		}
	} while (n <= 0 || n >= 50);
	printf("BAT DAU NHAP DANH SACH\r\n");
	nhapX(a, n);
	printf("KET QUA SAU KHI NHAP\r\n");
	xuatX(a, n);
}