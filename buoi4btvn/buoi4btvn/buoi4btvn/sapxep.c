#include<stdio.h>
void hoanvi(int *a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void inarr(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%3d", *(arr + i));
		i++;
	}

}
void sapxep(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				hoanvi(&arr[i], &arr[j]);
			}
		}
	}
	inarr(arr, size);
}

