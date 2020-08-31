#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void nhap(int **a,int n,int m)
{
	int i =0;
	int j =0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);	
		}
		printf("\r\n");
	}
}
void xuat(int **a,int n,int m)
{
	int i =0;
	int j =0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);		
		}
		printf("\r\n");
	}
}
void tonghangchan(int **a,int n,int m)
{
	int i=0,j=0;
	int s=0;
	for(i=1;i<m;i+=2)
	{
		for(j=0;j<n;j++)
		{
			s += a[i][j];
		}
	}
	printf("tong cac phan tu hang chan la : %d\r\n",s);
}
int maxcot1(int  **a,int n,int m)
{
	int max =a[0][0];
	int i =0;
	for(i = 1 ;i<m;i++)
	{
		if(a[i][0]>max)
		{
			max = a[i][0];
		}
	}
	return max;
}
int main()
{
	int n,m;
	int **a;

	do{
		printf("nhap so  cot : \r\n");
		scanf("%d",&n);
		printf("nhap so  hang : \r\n");
		scanf("%d",&m);
		if(n<1||n>30||m<1||m>30)
		{
			printf("nhap sai  n : [1->30]\r\n");
		}
	}while(n<1||n>50||m<1||m>50);
	
	int i=0;
	a=(int **)malloc(n*sizeof(int*));
	for(i=0;i<m;i++)
	{
		a[i]=(int *)malloc(m*sizeof(int));
	}
	
	nhap(a,n,m);
	printf("ma tran la : \r\n");
	xuat(a,n,m);
	
	tonghangchan(a,n,m);
	printf("gia tri lon nhat cua cot 1 la : %d\r\n",maxcot1(a,n,m));
	
	int j =0;
	for(j=0;j<m;j++)
	{
		free(a[j]);
	}
	free(a);
	
	return 0;
}
