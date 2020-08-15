#include<stdio.h>
#include<math.h>
#include"controham.h"

void main()
{
	printf("==== x^2 tren [1,2]====\r\n");
	tichphan(1, 2, X2);
	printf("==== Cos(x) tren [1,2]====\r\n");
	tichphan(1, 2, Cos);
	printf("==== Sqrt(x) tren [1,2]====\r\n");
	tichphan(1, 2, Sqrt1);

}