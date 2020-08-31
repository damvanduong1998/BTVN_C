#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void nhap(int a[],int n)
{
	int i =0;
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{
	int i =0;
	for(i =0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\r\n");
}
void tbcchia3(int a[],int n)
{
	int i =0;
	int s = 0,dem =0;
	for(i =0;i<n;i++)
	{
		if(a[i]%3==0)
		{
			s+=a[i];
			dem++;
		}
	}
	printf("trung binh cong cac so chia het cho 3 : %.3f\r\n",(float)s/dem);
}
void chen(int a[],int *n,int x,int vt)
{
	int i =0;
	for(i=*n;i>vt;i--)
	{
		a[i]=a[i-1];
	}
	a[vt]=x;
	++*n;
}
void main()
{
	int *a;
	a=(int *)malloc(100*sizeof(int));
	int n;
	do{
		printf("nhap so  luong phan tu : \r\n");
		scanf("%d",&n);
		if(n<1||n>30)
		{
			printf("nhap sai  n : [1->30]\r\n");
		}
	}while(n<1||n>50);
	nhap(a,n);
	printf("mang vua nhap la : ");
	xuat(a,n);
	tbcchia3(a,n);
	int x,vt;
	printf("nhap so can chen : \r\n");
	scanf("%d",&x);
	do{
		printf("nhap vt can chen : \r\n");
		scanf("%d",&vt);
		if(vt<0||vt>n)
		{
			printf("nhap sai\r\n");
		}
	}while(vt<0||vt>n);
	chen(a,&n,x,vt);
	xuat(a,n);
}
