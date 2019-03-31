#include <stdio.h>

int factorial(int n);

int main()
{
	int test_cases;
	scanf("%d", &test_cases);
	for (int i = 0; i < test_cases; i++)
	{
		int count = 0;
		int num;
		scanf("%d", &num);
		if (num == 1)
			printf("1\n");
		else if (num == 2)
			printf("2\n");
		else
		{
			for (int j = 0; j <= num / 3; j++)
			{
				for (int k = 0; k <= (num - 3 * j) / 2; k++)
				{
					count += factorial(num - 2 * j - k) / (factorial(j) * factorial(k) * factorial(num - 3 * j -  2 * k));
				}
			}
			printf("%d\n", count);
		}
	}
}
int factorial(int n)
{
	int c;
	int result = 1;

	for (c = 1; c <= n; c++)
		result = result * c;

	return result;
}
