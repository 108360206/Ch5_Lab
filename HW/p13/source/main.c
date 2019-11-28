#include <stdio.h>
#include <stdlib.h>

int cubeByvalue(int &nPtr);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	cubeByvalue(number);

	printf("\n new The value of number is %d\n", number);

	system("pause");
	return 0;
}

int cubeByvalue(int &nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}