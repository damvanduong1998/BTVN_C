#include<stdio.h>
#include<Windows.h>
#include"kitu_arr_pt.h"
void main()
{
	char str_arr[] = "He0llo";
	// mot so truong hop bi loi , nen ep kieu
	char *str_pt =(char*) "He0llo";
	printf("gia tri arr la %d\r\n", demkt(str_arr));
	printf("gia tri pt la %d\r\n", demkt(str_pt));
	// khong the truyen con tro vao  inhoa
	//inthoa(str_pt); 
	// vi read vao vung nho cam codesegment
	inthoa(str_arr); 
	// con tro ham
	float(*pt_ham)(int) = fx;
	printf("dia chi fx 0x%x\r\n", fx);
	printf("dia chi fx 0x%x\r\n", pt_ham);

}