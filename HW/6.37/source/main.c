#include <stdlib.h>
#include <stdio.h>

int ap(int a[],int g);

int main(void)
{
	int a, array[10]={0},max,size;

	printf("Enter a array : ");
	scanf_s("%d", &size);
	printf("enter %d integers:", size);
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &array[i]);
	}
	ap(array, size);
	printf("Maximum value = %d\n",array[size]);
	system("pause");
	return 0;
}
int ap(int a[],int g)
{
	int max, ch=0, ff;
    max = a[0];

	for (int j = 0; j < g; j++)
	{
		ff = 0;
		for (int i = 0; i < g; i++)
		{
			if (a[i] > a[i + 1])
			{
				ch = a[i];
				a[i] = a[i + 1];
				a[i + 1] = ch;
				ff = 1;
			}
		}
		if (ff == 0) 
		{
			return;
		}
	}
}