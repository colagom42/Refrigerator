#include <stdio.h>

int comp(int a);

int main()
{
	int num;
	int count = 0;
	int arr[1002];

	scanf("%d", &num);

	for (int i = 1; i < 1001; i++)
	{
		if ( i < 100)
			arr[i] = 1;
		else if (i == 1000)
			arr[i] = 0;
		else
		{
			arr[i] =comp(i);
		}
	}

	for (int i = 1; i <= num; i++)
	{
		count = count + arr[i];
	}
	printf("%d", count);

	return 0;
}
int comp(int a)
{
	int arr3[4];
	for (int i = 0; i < 3; i++)
	{
		arr3[i] = a % 10;
		a = a / 10;
	}
	int arr2[3];
	for (int i = 0; i < 2; i++)
	{
		arr2[i] = arr3[i] - arr3[i + 1];
	}

	if (arr2[0] == arr2[1])
		return 1;
	else
		return 0;
}

