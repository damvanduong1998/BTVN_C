#include<stdio.h>
#include<math.h>
float X2(float x)
{
	return x * x;
}
float Cos(float x)
{
	return cos(x);
}
float Sqrt1(float x)
{
	return sqrt(x);
}
void tichphan(float a, float b, float(*fx)(float))
{
	float s = 0;
	float h = (b - a) / 1000;
	float cd = (fx(a) + fx(b)) / 2;
	printf("gia tri tai 1 va 2 la %.3f va %3f\r\n", fx(a), fx(b));
	for (int i = 1; i < 999; i++)
	{
		cd += fx(a + i * h);
	}
	s = h * cd;
	printf("gia tri tich phan la %.3f\r\n", s);
}