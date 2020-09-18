#pragma once
class ttcanhan
{
	friend void nhapX(ttcanhan a[], int n);
	friend void xuatX(ttcanhan a[], int n);
public:
	char hoten[50];
	int tuoi;
	char gt[10];
	void nhap();
	void xuat();
};
