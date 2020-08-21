#include<stdio.h>
#include<string.h>
int demkt(char* a)
{
	// gia tri cuoi cua string luon la null
	int dem = 0;
	while (*(a + ++dem) != 0x00);
	return dem;
}
/*
int vt(char a [],char b[])
{
	int i = 0, j = 0;
	// tru 2 chong tran mang khi cong vs j
	for (i = 0; i < demkt(a) - 2; i++)
	{
		for (j = 0; j < demkt(b); j++)
		{
			// phai cong j de i chay va sosanh cac ki tu
			if (a[i + j] != b[j])
				break;
		}
		// neu da so sanh dung thi ta dung vong for
		if (j >= demkt(b))
			break;
	}
	return i;

}
*/


void main()
{
	char a[] = "{\r\n\"fotor\":\"on\"\r\n\"fan\":\"off\"\r\n}";
	printf(a);
	char target[] = "on";
	char b[] = "on";
	char *position = strstr(a, b);
	int i = 0, j = 0;
	// tru 2 chong tran mang khi cong vs j 
	for (i = 0; i < demkt(a) - 2; i++)
	{
		for (j = 0; j < demkt(b); j++)
		{
			// phai cong j de i chay va sosanh cac ki tu
			if (a[i + j] != b[j])
				break;
		}
		// neu da so sanh dung thi ta dung vong for
		if (j >= demkt(b))
			break;
	}
	//vt(a, target);
	printf("off o ci tri  thu %d \r\n", i);
	printf("off o ci tri  thu %x \r\n", a+i);
	printf("off o ci tri  thu %x \r\n", position);
}
