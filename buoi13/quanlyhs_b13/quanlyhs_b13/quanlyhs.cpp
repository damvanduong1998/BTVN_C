#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include"quanlyhs_obb.h"

void main()
{
	hocsinh *a;
	a = (hocsinh*)malloc(50 * sizeof(hocsinh));
	int n;
	do {
		printf("nhap so luong hoc vien\r\n");
		scanf("%d", &n);
		if (n <= 0 || n > 50)
		{
			printf("nhap lai \r\n");
		}
	} while (n <= 0 || n > 50);
	printf("BAT DAU NHAP DANH SACH\r\n");
	nhapX(a, n);
	printf("DANH SACH SAU NHAP\r\n");
	xuatX(a, n);
	printf("DANH SACH SAU SAP XEP\r\n");
	sapxep(a, n);
	xuatX(a, n);
}