#include<stdio.h>
#include<setjmp.h>
#include<Windows.h>
jmp_buf buff;
int err = 0;
NTAPI HANDLER(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
	printf("Err code : 0x%x\r\n", ExceptionInfo->ExceptionRecord->ExceptionCode);
	err = 1;
	longjmp(buff, 1); // thuc hien con tro ham in ra loi  
}

void main()
{
	AddVectoredExceptionHandler(1, HANDLER);
	int x = 0;
	int y = 0;
	setjmp(buff); // luu dia chi chuong trinh
	if (err == 0)
	{
		x = 1 / y;
	}
	printf("ket thuc\r\n");
}