#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[100] = {0};
	int j=0,k;
	printf("Enter a string :");
	scanf_s("%s", &a,100);
	for (int i = 0; i < 100; i++)
	{
		if (a[i]>0) 
		{
			j++;
		}
	}
	for (int k = 0; k < j; k++)
	{
		printf("%c", a[j-k-1]);
	}


	system("pause");
	return 0;
}