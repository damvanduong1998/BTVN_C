#include<stdio.h>
#include<math.h>
#include"btvn1_b5.h"

void main()
{
	int n;
	int a, b, c;
	printf("1 - tinh tong binh phuong cac so le den n\r\n");
	printf("2 - xet n la so chan hay le\r\n");
	printf("3 - tim max 3 so a,b,c\r\n");
	printf("4 - tim ucln va bcnn cua 2 so a va b\r\n");
	do {
		printf("nhap n = ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("\nnhap lai n\r\n");
		}
	} while (n <= 0);
	tongbp(n);
	ktcl(n);
	printf("\nnhap a = ");
	scanf_s("%d", &a);
	printf("\nnhap b = ");
	scanf_s("%d", &b);
	printf("\nnhap c = ");
	scanf_s("%d", &c);
	printf("\nso lon nhat trong ba so %d %d %d la %d ", a, b, c, max1(a, b, c));
	printf("\nuoc chung lon nhat cua  %d va %d la %d ", a, b, ucln(a, b));
	printf("\nboi chung nho nhat cua  %d va %d la %d ", a, b, bcnn(a, b));

}