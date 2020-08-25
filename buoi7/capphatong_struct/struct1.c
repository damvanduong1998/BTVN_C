#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct tinh
{
	int mt;
	char ten[50];
	float dtich;	
}Tinh;
void nhap(Tinh *a)
{
	printf("nhap ma tinh : \r\n");
	scanf("%d",&a->mt);
	printf("nhap ten tinh : \r\n");
	fflush(stdin);
	gets(a->ten);
	printf("nhap dien tich : \r\n");
	scanf("%f",&a->dtich);
}
void xuat(Tinh *a)
{
	printf("ma tinh : %d\r\n",a->mt);
	printf("ten tinh : %s\r\n",a->ten);
	printf("dien tich : %.3f km2\r\n",a->dtich);
}

void nhapX(Tinh *a,int n)
{
	int i =0;
	for(i=0;i<n;i++)
	{
		nhap(&a[i]);
		printf("\n=============\r\n");
	}
}
void xuatX(Tinh *a,int n)
{
	int i =0;
	printf("ket qua \r\n");
	for(i=0;i<n;i++)
	{
		xuat(&a[i]);
		printf("\n================\r\n");
	}
}

void main()	
{
	Tinh *a;
	a = (Tinh*)calloc(100,sizeof(Tinh));
	int n;
	printf("nhap n = \r\n");
	scanf("%d",&n);
	nhapX(a,n);
	xuatX(a,n);
	free(a);
}

