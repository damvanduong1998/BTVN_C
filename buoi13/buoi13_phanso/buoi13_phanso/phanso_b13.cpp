#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include"phanso.h"


void main()
{
	phanso a;
	phanso b;
	printf("nhap 2 phan so a va b\r\n");
	a.nhap();
	b.nhap();
	phanso c = a.tich(b);
	phanso d = a.tong(b);
	phanso e = a.hieu(b);
	printf("tich la: ");
	c.rutgon();
	printf("tong la: ");
	d.rutgon();
	printf("hieu la: ");
	e.rutgon();
}