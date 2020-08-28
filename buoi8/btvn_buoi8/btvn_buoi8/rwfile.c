#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void readfile(FILE *a)
{
	char temp[20];
		while (fgets(temp, 20, a)!= NULL)
		{
			printf("%s", temp);
		}
}
void writefile(FILE *a)
{
	char temp[] = " wirte to file ";
	fputs(temp, a);
}
void copyfile(FILE *a, FILE *b)
{
	char temp[20];
	while (fgets(temp, 20, a) != NULL)
	{
		fputs(temp, b);
	}

}

void main()
{
	FILE *pt;
	FILE *cp;
	pt = fopen("1.txt", "ab+");
	if (!pt)
	{
		printf("ko mo duoc file\r\n");
		exit(1);
	}
	else
	{
		printf("file da duoc mo thanh cong\r\n");
	}
	cp = fopen("2.txt", "ab+");
	if (!cp)
	{
		printf("ko mo duoc file\r\n");
	}
	else
	{
		printf("file da duoc mo thanh cong\r\n");
	}
	// viet file
	writefile(pt);
	// dat con tro tu cuoi ve dau de tim kich thuoc  file (byte)
	fseek(pt, 0, SEEK_END);
	int len = ftell(pt);
	fseek(pt, 0, SEEK_SET);
	printf("do dai byte cua file = %d\r\n", len);
	// doc file 
	readfile(pt);
	// dat lai con tro ve dau file
	fseek(pt, 0, SEEK_SET);
	copyfile(pt, cp);
	printf("copy thanh cong \r\n");
	fclose(pt);
	fclose(cp);
}