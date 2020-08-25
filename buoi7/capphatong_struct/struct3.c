#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct time
{
	int ngay;
	int thang;
	int nam;
}ng;

typedef struct hopsua
{
	char nhan[50];
	int thetich;
	ng hansudung;
}hs;

int ktnamnhuan(ng *a)
{
	if(a->nam%4==0&&a->nam%100!=0||a->nam%400==0)
		return 1;
	return 0;
}
int ktngay(ng *a)
{
	int ngaytrongthang =0;
	int x = ktnamnhuan(a);
	switch(a->thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ngaytrongthang= 31;
			break;
		case 4: case 6: case 9 : case 11: 
		 	ngaytrongthang=30;
		 	break;
		case 2:
			if(x == 1)
				ngaytrongthang = 29;
			else 
				ngaytrongthang = 28;
			break;
	}
	return ngaytrongthang;
}
void nhapngay(ng *a)
{
	do{
		printf("nhap nam = \r\n");
		scanf("%d",&a->nam);
		if(a->nam>10000||a->nam<2000)
			printf("ban nhap sai nam , hay xem lai\r\n");
	}while(a->nam>10000||a->nam<2000);
	do{
		printf("nhap thang = \r\n");
		scanf("%d",&a->thang);
		if(a->thang>12||a->thang<1)
			printf("ban nhap sai thang , hay xem lai\r\n");
	}while(a->thang>12||a->thang<1);
	do{
		printf("nhap ngay = \r\n");
		scanf("%d",&a->ngay);
		if(a->ngay>ktngay(a)||a->ngay<1)
			printf("ban nhap sai ngay , hay xem lai\r\n");
	}while(a->ngay>ktngay(a)||a->ngay<1);	
}
void xuatngay(ng *a)
{
	printf("%d/%d/%d",a->ngay,a->thang,a->nam);
}
void nhaphs(hs *a)
{
	printf("nhap nhan hang : \r\n");
	fflush(stdin);
	gets(a->nhan);
	printf("nhap the tich : \r\n");
	scanf("%d",&a->thetich);
	nhapngay(&a->hansudung);
}
void xuaths(hs *a)
{
	printf("nhan hang la : %s\r\n",a->nhan);
	printf("the tich la : %d\r\n",a->thetich);
	printf("han su dung la : \r\n");
	xuatngay(&a->hansudung);
}
void nhapnhs(hs *a,int n)
{
	int i =0;
	for(i=0;i<n;i++)
	{
		printf("\nloai thu %d\r\n",i+1);
		nhaphs(&a[i]);
	}
}
void xuatnhs(hs *a,int n)
{
	int i =0;
	printf("\nket qua sau khi  nhap :::\r\n");
	for(i=0;i<n;i++)
	{
		printf("\nsap pham so %d\r\n",i+1);
		xuaths(&a[i]);
		printf("\n=============\r\n");
	}
}
void main()
{
	hs *a;
	a = (hs*)malloc(100*sizeof(hs));
	int n ;
	printf("nhap so luong san pham \r\n");
	scanf("%d",&n);
	nhapnhs(a,n);
	xuatnhs(a,n);	
	free(a);
}
