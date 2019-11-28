#include <stdio.h>
#include <stdlib.h>

int ser(int *x, int lo, int up, int y);

int main(void)
{
	int array[10] = { 2,3,8,9,55,22,33,44,77,88 };

	printf(" %d", ser(array,0,9,77));
	system("pause");
	return 0;
}
int ser(int *x, int lo, int up, int y)
{
	if(lo<=up)
	{
		int mid =lo+ (up-lo) / 2;
		if (y == x[mid])
		{
			return mid;
		}
		else if(y< x[mid])
		{
			return ser(x, lo, mid - 1, y);
		}
		else
		{
			return ser(x, mid + 1, up, y);
		}
	}
	else
	{
		return -1;
	}
}