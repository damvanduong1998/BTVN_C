#include<stdio.h>
#include <string.h>

int stringlen(char a[])
{
	int dem =0;
	while(a[++dem]!= 0x00);
	return dem;
}
int main() {
	int i=0,start=0,k=0;
	int j =0,stop =0;
	
	char str[] = "{\r\n\
	\"ABC\":\"ON\"\r\n\
	\"FUN\":\"OFF\"\r\n\
	\"MOTOR\":\"ON\"\r\n\
	\"FAN\":\"OFF\"\r\n\
	\"TV\":\"ON\"\r\n}";
	
	
	printf(str);
	printf("\r\n");
	printf("so ki tu chuoi str : %d\r\n",stringlen(str));

	char target [] = "FAN";
	char target1[]= "ON";
	char target2[]= "OFF";
	char target3[]= "\"";
	char status[] = "" ;
	char *sub;
	char *sub2; 
	char *sub3;
	// dia chi cua F FAN
  sub = strstr(str, target);
  // dia chi cua \" dau tien 
  sub2 = strstr(sub+stringlen(target)+1,target3);
  // dia chi cua \" cuoi cung 
  sub3 = strstr(sub2+2,target3);
  
  printf("\ndia chi dau trang thai : %x\r\n", sub2);
  printf("\ndia chi cuoi trang thai : %x\r\n", sub3);
  // kiem tra xem target co trong str ko ?
  if(sub==0)
  {
  	printf("\n%s khong co trong chuoi\r\n",target);
  	return 0;
  }
  else
  printf("\ndia chi F \"FAN\" : %x\r\n", sub);
  // tim cac vi tri dac biet
  for(i=0;i<stringlen(str);i++)
  {
	if(&str[i]==sub)
	{
		printf("\nvi tri F \"FAN\" : %d\r\n", i);
	}
	if(&str[i]==sub2)
	{
		start = i;
		printf("\nvi tri start : %d\r\n", start);
	}
	if(&str[i]==sub3)
	{
		stop = i;
		printf("\nvi tri stop : %d\r\n", stop);
	}
	
  }
  // tim cac ki tu trang thai trong chuoi str
  	for(i =0;i<strlen(str);i++)
  	{
	  if(&str[i]>=sub2)
	  	if(&str[i]<=sub3)
	  	{
	  		{
			status [k]=str[i];
			k++;
	  		}
		  }  
	}
	// in ra ket qua 
  	printf("do dai chuoi chua trang thai %d\r\n ",stringlen(status));
  	printf("trang thai FAN : ");
	printf(status);
	printf("\r\n");
	
  return 0;
}
