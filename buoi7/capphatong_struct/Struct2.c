#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

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
	printf("\n=========ket qua ==========\r\n");
	for(i=0;i<n;i++)
	{
		xuat(&a[i]);
		printf("\n================\r\n");
	}
}
void timkiem(Tinh *a,int n, int target)
{
	int i =0;
	int x =0;
	for(i=0;i<n;i++)
	{
		if (a[i].mt==target)
		{
			printf("ket qua tim kiem theo ma tinh la : \r\n");
			xuat(&a[i]);
			x = 1;
		}
	}
	if(x !=1)
	{
		printf("ko co target\r\n");
	}
	
}

void timkiem2(Tinh *a,int n, char *target)
{
	int i =0;
	int x =0;
	int k =0;
	for(i=0;i<n;i++)
	{
		x = strcmp(a[i].ten,target);
		if (x==0)
		{
			printf("ket qua tim kiem theo ten la : \r\n");
			xuat(&a[i]);
			k= 1;
		}
	}
	if(k !=1)
	{
		printf("ko co target\r\n");
	}
	
}

void main()	
{
	Tinh *a;
	Tinh b = {89,"aaa",12};
	a = (Tinh*)calloc(100,sizeof(Tinh));
	int n;
	printf("nhap n = \r\n");
	scanf("%d",&n);
	nhapX(a,n);
	xuatX(a,n);
	int target;
	printf("\nnhap ma tinh = \r\n");
	scanf("%d",&target);
	timkiem(a,n,target);
	char target2[50];
	printf("\nnhap ten tinh can tim\r\n");
	fflush(stdin);
	gets(target2);
	timkiem2(a,n,target2);
	free(a);
}

