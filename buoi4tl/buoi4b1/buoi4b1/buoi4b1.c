#include<stdio.h>
#include<math.h>
void hoanvi(int *a, int *b);
void hoanvi(int *a, int *b) // nho gan con tro
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}



void main()
{
	//  ======= mang 1 chieu =====
	/*
	char arr_dong1 []= {1,2,3,4}; // char 1 byte
	int arr_tinh2 [5]= { 1,3,5,7,9}; // int 4 byte

	int i = 0, s = 0, s1 = 0;
	int size1 = sizeof(arr_dong1);
	int size2 = sizeof(arr_tinh2) / sizeof(int); // int 4 byte nen phai chia

	printf("do lon cua mang arr1 = %d\r\n", \
		sizeof(arr_dong1));
	printf("do lon cua mang arr2 = %d\r\n", \
		sizeof(arr_tinh2) / sizeof(int));

	for (i = 0; i < size1; i++)
	{
		s += *(arr_dong1 + i); // tuong tu arr_dong1[i];
	}
	for (i = 0; i < size2; i++)
	{
		s1 += *(arr_tinh2 + i); // tuong tu arr_tinh2[i];
	}
	printf("tong mang 1 %d\r\n", s);
	printf("tong mang 2 %d\r\n", s1);
	*/

	// ===== mang nhieu chieu=====


	// ==== con tro ====
	//int a = 1;
	//int *pa = &a;
	//printf("dia chi cua a =  0x%x\r\n", pa);
	//printf("gia tri a =  %d\r\n",*pa);
	//int b = 2;
	//hoanvi(&a, &b); // truyen dia chi cho ham 
	//printf("a =  %d ; b = %d\r\n" ,a,b);


}