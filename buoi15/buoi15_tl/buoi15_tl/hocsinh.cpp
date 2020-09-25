#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include"student.h"


hocsinh::hocsinh()
{
	memcpy(this->hoten, "duong", strlen("duong"));
	memcpy(this->id, "145818448", strlen("145818448"));
	this->tuoi = 22;
	this->gt = nam;
	this->dtoan = 10;
	this->dvan = 10;
	this->dvan = 10;

}
void hocsinh::nhap()
{
	getchar();
	printf("nhap ma hoc sinh\r\n");
	gets_s(this->id);
	printf("nhap hoten hoc sinh:\r\n");
	gets_s(this->hoten);
	do {
		printf("nhap gioi tinh:\r\n");
		scanf("%d", &this->gt);
		if (this->gt > 2 || this->gt < 0)
		{
			printf("chu y nhap dung format o tren\r\n");
		}
	} while (this->gt > 2 || this->gt < 0);
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
void hocsinh::xeploai()
{
	if (this->dtbm() >= 8.5)
	{
		printf("hoc sinh xep loai : gioi\r\n");
	}
	else if (this->dtbm() < 8.5 && this->dtbm() > 5.5)
	{
		printf("hoc sinh xep loai : kha\r\n");
	}
	else if (this->dtbm() <= 5.5)
	{
		printf("hoc sinh xep loai : trung binh\r\n");
	}
}
void hocsinh::xuat()
{
	printf("ma hoc sinh : %s\r\n", this->id);
	printf("ho va ten hoc sinh : %s\r\n", this->hoten);
	if (gt == nam)
	{
		printf("gioi tinh : nam \r\n");
	}
	else if (gt == nu)
	{
		printf("gioi tinh : nu \r\n");
	}
	else if (gt == unknow)
	{
		printf("gioi tinh : unknow \r\n");
	}
	this->dtb = this->dtbm();
	printf("diem trung binh %.3f\r\n", this->dtb);
	this->xeploai();
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
