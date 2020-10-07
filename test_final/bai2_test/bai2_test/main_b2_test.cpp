#include<stdio.h>
#include<string.h>
typedef struct StructsmartHome
{
	bool light;
	bool fan;
	bool motor;
}SH;
int sosanhchuoi(char *a, char *b)
{
	int min = 0;
	int i = 0;
	if (sizeof(a) >= sizeof(b))
	{
		min = sizeof(b);
	}
	else
		min = sizeof(a);

	for (i = 0; i < min; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}
int main()
{
	SH home;
	char source[] = "HTTP1.1 200 OK\r\n\
	\t{\r\n\
	\t\t\"light\":\"off\",\r\n\
	\t\t\"fan\":\"on\",\r\n\
	\t\t\"motor\":\"off\",\r\n\
	\t}";
	printf("[chuoi can xu ly]: %s\r\n", source);
	char ob1[] = "light";
	char ob2[] = "fan";
	char ob3[] = "motor";
	char tg1[] = "on";
	char tg2[] = "off";
	char *ad1;
	char *ad1_1;
	char *ad2;
	char *ad2_1;
	char *ad3;
	char *ad3_1;
	char cop1[9] = { 0 };
	char cop2[9] = { 0 };
	char cop3[9] = { 0 };
	ad1 = strstr(source, ob1) + strlen(ob1) + 3;
	ad1_1 = strstr(ad1, "\"");
	int x_1 = ad1_1 - ad1;
	ad2 = strstr(source, ob2) + strlen(ob2) + 3;
	ad2_1 = strstr(ad2, "\"");
	int x_2 = ad2_1 - ad2;
	ad3 = strstr(source, ob3) + strlen(ob3) + 3;
	ad3_1 = strstr(ad3, "\"");
	int x_3 = ad3_1 - ad3;
	int i = 0;
	for (i = 0; i < x_1; i++)
	{
		cop1[i] = ad1[i];
	}
	for (i = 0; i < x_2; i++)
	{
		cop2[i] = ad2[i];
	}
	for (i = 0; i < x_3; i++)
	{
		cop3[i] = ad3[i];
	}
	printf("dap an l: %s\r\n", cop1);
	printf("dap an f: %s\r\n", cop2);
	printf("dap an m: %s\r\n", cop3);

	if (sosanhchuoi(cop1, tg1) == 1)
	{
		home.light = true;
	}
	else if (sosanhchuoi(cop1, tg2) == 1)
	{
		home.light = false;
	}
	if (sosanhchuoi(cop2, tg1) == 1)
	{
		home.fan = true;
	}
	else if (sosanhchuoi(cop2, tg2) == 1)
	{
		home.fan = false;
	}
	if (sosanhchuoi(cop3, tg1) == 1)
	{
		home.motor = true;
	}
	else if (sosanhchuoi(cop3, tg2) == 1)
	{
		home.motor = false;
	}

	if (home.light)
	{
		printf("light is on\r\n");
	}
	else
	{
		printf("light is off\r\n");
	}

	if (home.fan)
	{
		printf("fan is on\r\n");
	}
	else
	{
		printf("fan is off\r\n");
	}

	if (home.motor)
	{
		printf("motor is on\r\n");
	}
	else
	{
		printf("motor is off\r\n");
	}
	printf("ket thuc");
	return 0;
}