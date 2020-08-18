#include<stdio.h>
#include<math.h>

void tongbp(int n)
{
	int i = 1;
	int sum = 0;

	for (i = 1; i <= n; i = i + 2)
	{
		sum += i * i;
	}
	printf("\ntong bp cac so le tu 1 den %d = %d\r\n", n, sum);
}
int max(int a, int b)
{
	int max = 0;
	if (a > b)
		return a;
	else
		return b;
}
int max1(int a, int b, int c)
{
	if (max(a, b) > c)
		return max(a, b);
	else
		return c;
}
void ktcl(int n)
{
	if (n % 2 == 0)
		printf("\n %d la so chan\r\n", n);
	else
		printf("\n %d la so le\r\n", n);
}
int ucln(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
int bcnn(int a, int b)
{
	return (a*b) / ucln(a, b);
}