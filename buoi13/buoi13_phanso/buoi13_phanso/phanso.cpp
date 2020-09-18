#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "phanso.h"
void phanso::nhap()
{
	do {
		printf("nhap tu so va mau so\r\n ");
		scanf("%d%d", &this->tu, &this->mau);
		//doi dau tru len tu//
		if (this->mau <= 0)
		{
			this->mau = -this->mau;
			this->tu = -this->tu;
		}
	} while (this->mau == 0);
}
void phanso::rutgon()
{
	int i = 0;
	int a = this->tu;
	int b = this->mau;
	int min = (a > b) ? b : a;
	for (i = min; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			a = a / i;
			b = b / i;
			break;
		}
	}
	printf("phan so la: %d / %d\r\n", a, b);
}
phanso phanso::tich(phanso b)
{
	phanso kq;
	kq.tu = this->tu*b.tu;
	kq.mau = this->mau*b.mau;
	return kq;
}
phanso phanso::tong(phanso b)
{
	phanso kq;
	kq.tu = (this->tu*b.mau) + (this->mau*b.tu);
	kq.mau = this->mau*b.mau;
	return kq;
}
phanso phanso::hieu(phanso b)
{
	phanso kq;
	kq.tu = (this->tu*b.mau) - (this->mau*b.tu);
	kq.mau = this->mau*b.mau;
	return kq;
}