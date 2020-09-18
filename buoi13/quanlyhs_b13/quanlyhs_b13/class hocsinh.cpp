#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include"quanlyhs_obb.h"
void hocsinh::nhap()
{
	printf("nhap ma hoc sinh\r\n");
	getchar();
	gets_s(this->id);
	printf("nhap ho ten hoc vien\r\n");
	gets_s(this->hoten);
	printf("nhap gioi tinh\r\n");
	gets_s(this->gt);
	do {
		printf("nhap diem mon toan\r\n");
		scanf("%f", &this->dtoan);

		if ((this->dtoan <= 0) || (this->dtoan > 10))
		{
			printf("nhap lai diem");
		}
	} while ((this->dtoan <= 0) || (this->dtoan > 10));
	do {
		printf("nhap diem mon van\r\n");
		scanf("%f", &this->dvan);
		if ((this->dvan <= 0) || (this->dvan > 10))
		{
			printf("nhap lai diem");
		}
	} while ((this->dvan <= 0) || (this->dvan > 10));
	do {
		printf("nhap diem mon tieng anh\r\n");
		scanf("%f", &this->dtanh);
		if ((this->dtanh <= 0) || (this->dtanh > 10))
		{
			printf("nhap lai diem");
		}
	} while ((this->dtanh <= 0) || (this->dtanh > 10));
}
float hocsinh::dtbm()
{
	return (this->dtoan + this->dtanh + this->dvan) / 3;
}
void hocsinh::xuat()
{
	printf("ma hoc sinh : %s\r\n", this->id);
	printf("ho va ten : %s\r\n", this->hoten);
	printf("gioi tinh : %s\r\n", this->gt);
	this->dtb = this->dtbm();
	printf("diem trung binh %.3f\r\n", this->dtb);
	if (this->dtb >= 8.5)
	{
		strcpy(this->xl, "gioi");
	}
	else if (this->dtb < 8.5 && this->dtb > 5.0)
	{
		strcpy(this->xl, "kha");
	}
	else
	{
		strcpy(this->xl, "trungbinh");
	}
	printf("xep loai : %s\r\n", this->xl);
}
void nhapX(hocsinh *a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("hoc sinh thu %d\r\n", i + 1);
		a[i].nhap();
	}
}
void xuatX(hocsinh *a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("hoc sinh thu %d\r\n", i + 1);
		a[i].xuat();
	}
}
void sapxep(hocsinh *a, int n)
{
	int i = 0;
	int j = 0;
	hocsinh temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			a[i].dtb = a[i].dtbm();
			a[j].dtb = a[j].dtbm();
			if (a[i].dtb < a[j].dtb)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

		}
	}
}