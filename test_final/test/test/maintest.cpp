#include<stdio.h>
#include<stdint.h>

void setbit(uint32_t x, int val, int valsize, int pos)
{
	uint32_t y = 0;
	int i = 0;
	for (i = 0; i < valsize; i++)
	{
		y = y | 1 << (pos + i);
	}
	printf("gia tri sau khi dich 1 tai pos valsize lan : %d\r\n", y);
	y = ~y;
	printf("gia tri dao cua gia tri tren : %d\r\n", y);
	x = x & y;
	printf("gia tri khi dem x and gia tri dao o tren : %d\r\n", x);
	val = val << pos;
	printf("gia tri val da dich phai pos bit : %d\r\n", val);
	x = x | val;
	printf("ket qua cuoi cung : %d\r\n", x);
}
int main()
{
	uint32_t x = 800;
	int val = 7;
	int valsize = 3;
	int pos = 3;
	setbit(x, val, valsize, pos);
	return 0;
}