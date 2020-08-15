// ham tinh ptb2
float timdelta(int a, int b, int c)
{
	int delta = b * b - (4 * a*c);
	return delta;
}
void ptb2(int a, int b, int c)
{
	float delta = 0;

	
	delta = timdelta(a, b, c);

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

// ham tinh tich phan

float f(float x)
{
	return x * x;
}
float tichphan(float a, float b)
{
	int i;
	float d = 0;
	float h = 0;
	float s = 0;

	h = (b - a) / 1000;
	d = (f(a) + f(b)) / 2;
	for (i = 1; i <= 999; i++)
	{
		d += f(a + i * h);
	}
	s = d * h;
	return s;
}