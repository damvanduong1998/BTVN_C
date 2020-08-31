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
		printf("%3d",a[i]);
	}
	printf("\r\n");
}
void xuatsochan(int a[],int n)
{
	int i =0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("so chan : %d - vi tri : %d \r\n",a[i],i);
		}
	}
}
void sxgiam(int a[],int n)
{
	int i=0;
	int j =0;
	int temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j = i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void chen(int a[],int *n,int x,int vt)
{
	int  i =0;
	for(i=*n;i>vt;i--)
	{
		a[i]=a[i-1];
	}
	a[vt]=x;
	++*n;
}
int vtcanchen(int a[],int n,int x)
{
	int i =0;
	while(x<a[i])
	{
		i++;
	}
	return i;	
}
int main()
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
	}while(n<1||n>30);
	nhap(a,n);
	printf("mang vua nhap la : ");
	xuat(a,n);
	xuatsochan(a,n);
	printf("mang sau khi sap xep giam dan la : ");
	sxgiam(a,n);
	xuat(a,n);
	int x ;
	printf("nhap gia tri can chen : ");
	scanf("%d",&x);
	int vt = vtcanchen(a,n,x);
	chen(a,&n,x,vt);
	xuat(a,n);	
	return 0;
}
