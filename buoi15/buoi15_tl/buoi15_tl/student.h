#pragma once
#include"person.h"

class hocsinh : public ttcanhan
{
private:
	char id[10];
	int tuoi;
	float dtoan, dvan, dtanh;
	float dtb;
public:
	hocsinh();
	void nhap();
	float dtbm();
	void xeploai();
	void xuat();

	friend void nhapX(hocsinh *a, int n);
	friend void xuatX(hocsinh *a, int n);
	friend void sapxep(hocsinh *a, int n);
};



