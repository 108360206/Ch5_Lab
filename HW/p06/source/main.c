#include <stdio.h>
#include <stdlib.h>

int cubeByvalue(int n);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	number = cubeByvalue(number);

	printf("\n new The value of number is %d",number);

	system("pause");
	return 0;
}

int cubeByvalue(int n)
{
	return n * n * n;
}