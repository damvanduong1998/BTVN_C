#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void readfile(FILE *a)
{
	char temp[20];
	while (fgets(temp, 20, a) != NULL)
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
	pt = fopen("1.jpg", "ab+");
	if (!pt)
	{
		printf("ko mo duoc file\r\n");
		exit(1);
	}
	else
	{
		printf("file da duoc mo thanh cong\r\n");
	}
	cp = fopen("2.jpg", "ab+");
	if (!cp)
	{
		printf("ko mo duoc file\r\n");
		exit(1);
	}
	else
	{
		printf("file da duoc mo thanh cong\r\n");
	}
	/*
			// tim do lon file
			fseek(pt, 0, SEEK_END);
			int len = ftell(pt);
			fseek(pt, 0, SEEK_SET);
			printf("do dai byte cua file pt = %d\r\n", len);
			// doc file pt
			readfile(pt);
			fseek(pt, 0, SEEK_SET);
			// copy file pt sang cp
			//copyfile(pt, cp);
			fseek(cp, 0, SEEK_END);
			int len1 = ftell(cp);
			fseek(cp, 0, SEEK_SET);
			printf("\ndo dai byte cua file cp  = %d\r\n", len1);
			readfile(cp);
	*/
	int x = 0;
	while (!feof(pt))
	{
		char temp = fgetc(pt);
		fputc(temp, cp);
		//printf("%c", temp);
		x++;
	}
	printf("\n do lon file pt : %d\r\n",x);

	fclose(pt);
	fclose(cp);
}