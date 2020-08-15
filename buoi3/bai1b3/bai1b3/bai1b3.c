#include<stdio.h>
#include<math.h>
#include"giaiptb2vatichphan.h"

/*
   + khi thuc hien bai toan giai  tich phan , em khai bao 2 bien a,b la kieu int
   thi ket qua luon ra la 0.000000 voi moi  truong  hop. khi  em khai bao a,b la float 
   thi ket qua cho ra la dung . vi sao la vay ? mong a giai thich cho e ?
   + lenh printf ket qua em de la %3f nhung ct van in ra con so rat dai , con khi em
   de la %7.3f thi ra ket qua sau dau cham 3 con so. mong a giai thich %7.3f y nghia cu the la nhu the nao ?

*/


void main()
{
	// tinh ptb2
	int a , b, c;
	printf("giai phuong trinh bac 2\r\n");
	printf("nhap gia tri a,b,c\r\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("ham vua nhap = %dx^2 + %dx + %d\r\n", a, b, c);
	ptb2(a, b, c);
	

	// tinh tich phan
	printf("tinh tich phan f(x)=x^2 tren [a,b] \r\n");
	float a1, b1;
	printf("nhap [a,b] \r\n");
	scanf_s("%f%f", &a1, &b1);
	printf("ket qua la %7.3f", tichphan(a1,b1));
}

