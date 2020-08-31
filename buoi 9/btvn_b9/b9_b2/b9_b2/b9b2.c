#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void nhap(float a[],int n)
{
	int i =0;
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%f",&a[i]);
	}
}
void xuat(float a[],int n)
{
	int i =0;
	for(i =0;i<n;i++)
	{
		if(a[i]<0)
			continue;
		printf("%.3f\t",a[i]);
	}
	printf("\r\n");
}
void tbcsoduong(float a[],int n)
{
	int i =0;
	float s = 0;
	for(i=0 ;i<n;i++)
	{
		if(a[i]>0)
		{
			s+= a[i];	
		}	
	}
	printf("tong cac so duong : %.3f\r\n",s);
}

int main()
{
	float *a;
	a=(float *)malloc(100*sizeof(float));
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
	tbcsoduong(a,n);
	return 0;
}
