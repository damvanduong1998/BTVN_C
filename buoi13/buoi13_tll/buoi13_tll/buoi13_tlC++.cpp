#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<malloc.h>

//class hinhchunhat
//{
//private:
//	int temp;
//public: 
//	int chieudai;
//	int chieurong;
//	//================================//
//	int dienntich();
//	int dienntich()
//	{
//		return chieudai * chieurong;
//	}
//	int chuvi();
//	int chuvi()
//	{
//		return (chieudai + chieurong) * 2;
//	}
//
//};
class phanso
{
public:
	int tuso;
	int mauso;
	phanso nhan(phanso b);
	void rutgon();
	phanso tong(phanso b);
};
phanso phanso::nhan(phanso b)
{
	{
		phanso kqn;
		// this con tro chi dich danh dia chi no khai bao
		kqn.tuso = this->tuso * b.tuso;
		kqn.mauso = this->mauso * b.mauso;
		return kqn;
	}
}
void phanso::rutgon()
{
	phanso D;
	int a = this->tuso;
	int b = this->mauso;
	int i = 0;
	int min = (a > b) ? b : a;
	for (i = min; i >=1; i--)
	{
		if ((a%i == 0) && (b%i == 0))
		{
			a = a / i;
			b = b / i;
			break;
		}
	}
	this->tuso = a;
	this->mauso = b;
	printf("tu so la : %d\r\n", this->tuso);
	printf("mau so la : %d\r\n", this->mauso);
}
phanso phanso::tong(phanso b)
{
	phanso kqt;
	kqt.tuso = (this->tuso*b.mauso) + (b.tuso*this->mauso);
	kqt.mauso = (this->mauso*b.mauso);
	return kqt;
}
void main()
{
	/*hinhchunhat D;
	D.chieudai = 20;
	D.chieurong = 15;
	printf("dien tich la : %d\r\n",D.dienntich);
	printf("chu vi la : %d\r\n", D.chuvi);*/
	phanso a;
	phanso b;
	a.tuso = 2;
	a.mauso = 2;
	b.tuso = 2;
	b.mauso = 6;
	phanso c;
	c = a.nhan(b);
	printf("phan tinh tich - ko rut gon\r\n");
	printf("tu so : %d\r\n", c.tuso);
	printf("mau so : %d\r\n",c.mauso);
	phanso d=a.tong(b);
	printf("tinh tong - co rut gon\r\n");
	d.rutgon();

}