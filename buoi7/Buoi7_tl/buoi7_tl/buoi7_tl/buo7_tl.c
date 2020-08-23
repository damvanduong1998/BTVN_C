#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct Phanso
{
	int tu;
	int mau;
}ps;

ps nps(ps a, ps b)
{
	ps c;
	c.tu = a.tu*b.tu;
	c.mau = a.mau*b.mau;
	return c;
}
int ucln(int a,int b)
{
	int i = 0;
	int min = (a>b)?b:a;
	/*
		int min = 0;
		if (a > b)
			min = b;
		else
			min = a;
	*/
	
	for (i = min; i > 0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			break;
		}
	}
	return i;
}
void rutgon(ps *a)
{
	ps c;
	c.tu = a->tu / ucln(a->tu, a->mau);
	c.mau = a->mau / ucln(a->tu, a->mau);
	printf("%d/%d\r\n", c);
}
ps hps(ps a, ps b)
{
	ps c;
	c.tu = a.tu * b.mau - b.tu * a.mau;
	c.mau = a.mau * b.mau;
	return c;
}
ps tps(ps a, ps b)
{
	ps c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	return c;
}
void main()
{
	ps a, b;
	printf("nhap phan so a : ");
	scanf_s("%d", &a.tu);
	scanf_s("%d", &a.mau);
	printf("phan so A : %d/%d\r\n", a.tu, a.mau);
	printf("rut gon a : ");
	rutgon(&a);
	printf("nhap phan so b : ");
	scanf_s("%d", &b.tu);
	scanf_s("%d", &b.mau);
	printf("phan so B : %d/%d\r\n", b.tu, b.mau);
	printf("rut gon b : ");
	rutgon(&b);
	ps c = nps(a, b);
	printf("phan so C la tich a va b : ");
	rutgon(&c);
	ps d = tps(a, b);
	printf("\ntong cua a va b : ");
	rutgon(&d);
	ps e = hps(a, b);
	printf("\nhieu cua a va b : ");
	rutgon(&e);

}