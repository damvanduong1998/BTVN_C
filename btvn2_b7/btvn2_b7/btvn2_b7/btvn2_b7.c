#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#pragma pack(push)  /* push current alignment to stack */
#pragma pack(1)     /* set alignment to 1 byte boundary */


int tinhgiatri(int n)
{
	int i = 0;
	int s = 0;
	for (i = 0; i < n; i++)
	{
		s += 2 * n + 1;
	}
	return s;
}
int tinhgiatri2(int a, int b)
{
	if (a > b)
		return 2 * a * 2 * b + 1 - abs(a - 1);
	else
		return 5 * a - 3 * a * 3 * b;
}
void nhap(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("nhap a[%d] = ", i);
		scanf("%d", &a[i]);
		printf("\r\n");
	}
}
void xuat(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\r\n");
}
int ktnt(int n)
{
	int i = 0;
	if(n < 2)
		return 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
void timnt(int a[], int n)
{
	int i = 0;
	int kt = 0;
	for (i = 0; i < n; i++)
	{
		if (ktnt(a[i]) == 1)
		{
			printf("so nguyen to trong mang la : %d - vi tri la : %d\r\n", a[i], i);
			kt = 1;
		}		
	}
	if (kt == 0)
	{
		printf("ko co gia tri nguyen to trong mang \r\n");
	}
}
void timmax(int a[],int n)
{
	int max = a[0];
	int i =0;
	for(i =1;i<n;i++)
	{
		if(a[i]>max)
			max = a[i];
	}
	printf("gia tri lon nhat trong mang la : %d\r\n",max);
	printf("vi tri cua max la : ");
	for(i =0;i<n;i++)
	{
		if(a[i]==max)
			printf("%3d",i);
	}
	printf("\r\n");
}
void tongm(int a[],int n)
{
	int s=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		s+=a[i];
	}
	printf("tong cua mang la : %d\r\n",s);
	printf("trung binh cong cua mang la : %.3f\r\n",(float)s/n);
}
void main()
{
	int n;
	printf("tinh gia tri s = 1 + 3 + ....+ 2n +1\r\nnhap n = \r\n");
	scanf("%d", &n);
	printf("ket qua la : %d\r\n", tinhgiatri(n));
	int a, b;
	printf("tinh gia tri bieu thuc \r\n\
		s = 2 * a * 2 * b + 1 - abs(a - 1); neu a >b;\r\n\
		s = 5 * a - 3 * a * 3 * b; neu a <= b\r\nnhap a va b :\r\n");
	scanf("%d%d", &a, &b);
	printf("ket qua la : %d\r\n", tinhgiatri2(a, b));
	int z[50];
	int n1;
	do {
		printf("nhap so pha tu cua mang : \r\n");
		scanf("%d", &n1);
		if (n1 < 1 || n>50)
			printf("nhap sai , vui long xem lai gia tri [1-50]\r\n");
	} while (n1 < 1 || n>50);
	nhap(z, n1);
	printf("mang vua nhap la : \r\n");
	xuat(z, n1);
	timnt(z, n1);
	timmax(z,n1);
	tongm(z, n1);

}
