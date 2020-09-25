#pragma once
typedef enum gioitinh
{
	nam,
	nu,
	unknow,
}gioi_tinh;

class ttcanhan
{
	friend void nhapX(ttcanhan a[], int n);
	friend void xuatX(ttcanhan a[], int n);
protected:
	char hoten[50];
	int tuoi;
	gioi_tinh gt;
public:
	void nhap();
	void xuat();
};