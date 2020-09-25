#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"phanso.h"

phanso::phanso()
{
	tu = 1;
	mau = 0;
	printf("ham tao khong truyen doi so\r\n");
}
phanso::phanso(int tu, int mau)
{
	this->tu = tu;
	this->mau = mau;
	printf("ham tao co truyen doi so\r\n");
}
phanso phanso::operator*(phanso b)
{
	phanso kq;
	kq.tu = this->tu*b.tu;
	kq.mau = this->mau*b.mau;
	return kq;
}
phanso::~phanso()
{
	printf("ham xoa gia tri ham tao thanh cong\r\n");
}