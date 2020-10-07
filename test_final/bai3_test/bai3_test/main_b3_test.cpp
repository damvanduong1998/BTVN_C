#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
class gptb2
{
private:
	int a;
	int b;
	int c;
	float delta;
public:
	gptb2();
	float tinhdelta();
	void nhapgt();
	void xuatkq();
};

gptb2::gptb2()
{
	this->a = 1;
	this->b = 1;
	this->c = 1;
	delta = (this->b*this->b - 4 * this->a*this->c);
}
float gptb2::tinhdelta()
{
	return this->b*this->b - 4 * this->a*this->c;
}
void gptb2::nhapgt()
{
	do {
		printf("nhap cac so a,b va c \r\n");
		scanf("%d%d%d", &this->a, &this->b, &this->c);
		if (this->a == 0)
			printf("vui long kiem tra lai\r\n");
	} while (this->a == 0);
	printf("ham vua nhap = %dx^2 + %dx + %d\r\n", a, b, c);
}
void gptb2::xuatkq()
{
	this->delta = this->tinhdelta();
	printf("delta = %f\r\n", this->delta);
	if (delta < 0)
	{
		printf("pt vo nghiem\r\n");
	}
	else if (delta == 0)
	{
		printf("pt co nghiem kep = %3f\r\n"\
			, (float)-b / (2 * a));
	}
	else if (delta > 0)
	{
		printf("pt co 2 nghiem phan biet la \r\n");
		printf("x1 = %3f\r\n", \
			(float)(-b + sqrt(delta)) / (2 * a)); // su dung dau '\' ngat dong qua dai
		printf("x2 = %3f\r\n", \
			(float)(-b - sqrt(delta)) / (2 * a));
	}

}
int main()
{
	gptb2 a;
	a.nhapgt();
	a.xuatkq();

	return 0;
}