#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"person.h"
#include"student.h"
#include <string.h>
#include<malloc.h>
void main()
{
	hocsinh *a;
	int n;
	printf("chu y gioi tinh : \r\n0 - nam\r\n1 - nu\r\n2 - unknow\r\n");
	do {
		printf("nhap so hoc sinh : \r\n");
		scanf("%d", &n);
		if (n <= 0 || n > 50)
		{
			printf("nhap sai n\r\n");
		}
	} while (n <= 0 || n > 50);
	a = (hocsinh*)malloc(n * sizeof(hocsinh));
	nhapX(a,n);
	printf("DANH SACH TRUOC SAP XEP :\r\n");
	xuatX(a, n);
	printf("DANH SACH SAU KHI SAP XEP :\r\n");
	sapxep(a, n);
	xuatX(a, n);
	free(a);
}