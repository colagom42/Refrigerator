#include <stdio.h>

int d(int a);

int main()
{
	int arr[10002];
	int checker = 0;

	for (int i = 1; i < 10000; i++)
	{
		arr[i] = i + d(i);
		for (int j = 1; j < i; j++)
		{
			if (i == arr[j])
			{
				checker = 1;
			}
		}
		if (checker != 1)
		{
			printf("%d\n", i);
		}
		checker = 0;
	}
	return 0;
}
int d(int a)
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
			sum = sum + a % 10;
			a = (a / 10);
	}
	return sum;
}
