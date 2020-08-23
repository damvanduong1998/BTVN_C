#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>

typedef struct hocsinh 
{
	char ho[20];
	char ten[20];
	int tuoi;
	int toan;
	int van;
	int tanh;
	float demtb;
	int hanhkiem;
}hs;
float dtb(int a, int b, int c)
{
	return (float)(a + b + c) / 3;
}
void nhap(hs *a)
{
	printf("\nnhap ho : ");
	getchar();
	fflush(stdin);
	gets(a->ho);
	printf("\nnhap ten : ");
	gets(a->ten);
	printf("\nnhap tuoi : ");
	scanf_s("%d", &a->tuoi);
	printf("nhap diem toan van tanh : \r\n");
	scanf_s("%d%d%d", &a->toan, &a->van, &a->tanh);
	printf("\rnhap hanh kiem : ");
	scanf_s("%d", &a->hanhkiem);
	
}
void nhapX(hs *a, int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		nhap(&a[i]);	
	}
}
void xuat(hs *a)
{
	printf("\nho ten la : %s %s \r\n", a->ho, a->ten);
	printf("tuoi la : %d\r\n", a->tuoi);
	printf("diem toan van anh : %d %d %d\r\n", a->toan, a->van, a->tanh);
	printf("diem trung binh la : %f", dtb(a->toan, a->van, a->tanh));
	switch (a->hanhkiem)
	{
	case 1:
		printf("\nhanh kiem tot\r\n");
		break;
	case 2:
		printf("\nhanh kiem kha\r\n");
		break;
	case 3:
		printf("\nhanh kiem trung binh\r\n");
		break;
	default:
		break;
	}
}
void xuatX(hs *a, int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		xuat(&a[i]);
		printf("\n=====================\r\n");
	}
}
void main()
{
	int n;
	hs *a;
	printf("nhap so hoc sinh = ");
	scanf_s("%d", &n);
	
	
	printf("\nhanh kiem \r\n1 : gioi\r\n2 : kha\r\n3 : trung binh\r\n");
	nhapX(&a, n);
	xuatX(&a, n);

}