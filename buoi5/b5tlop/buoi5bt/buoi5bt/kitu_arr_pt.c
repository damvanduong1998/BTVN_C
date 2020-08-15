#include<stdio.h>
int demkt(char* a)
{
	// gia tri cuoi cua string luon la null
	int dem = 0;
	while (*(a + ++dem) != 0x00);
	return dem;
}
void inthoa(char *a)
{
	// chua hoa nho hon chu thuong la 32 trong bang ma Asci;
	int len = demkt(a);
	for (int i = 0; i < len; i++)
	{
		if (*(a + i) > 95 && *(a + i) < 123)
		{
			*(a + i) -= 32;
		}
	}
	printf("%s\r\n", a);
}
float fx(int x)
{
	return x * x + 2;

}