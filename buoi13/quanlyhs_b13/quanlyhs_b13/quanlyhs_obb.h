#pragma once
class hocsinh
{
	friend void nhapX(hocsinh *a, int n);
	friend void xuatX(hocsinh *a, int n);
	friend void sapxep(hocsinh	*a, int n);
public:
	char id[10];
	char hoten[50];
	char gt[10];
	int tuoi;
	float dtoan, dvan, dtanh;
	float dtb;
	char xl[20];

	void nhap();
	float dtbm();
	void xuat();

};
