#include <stdio.h>

int checker(int a);

int main()
{
	int wt;
	
	scanf("%d", &wt);

	printf("%d\n", checker(wt));

	return 0;
}

int checker(int a)
{
	int k3 = 0;

	int k5 = 0;

	int sum3, sum5;

	int c = a;

	while (1)
	{
		if (a % 3 == 0)
		{
			k3 = a / 3;
			sum3 = k3 + k5;
			break;
		}
		else if (a < 3)
		{
			break;
		}
		else
		{
			a = a - 5;
			k5++;		
		}
	}

	k3 = 0;
	k5 = 0;
	a = c;

	while (1)
	{
		if (a % 5 == 0)
		{
			k5 = a / 5;
			sum5 = k3 + k5;
			break;
		}
		else
		{
			a = a - 3;
			k3++;
			if (a == 0)
			{
				sum5 = k3 + k5;
				break;
			}
			else if (a < 3)
			{
				return -1;
			}
		}
	}

	if (sum3 > sum5)
		return sum5;
	else
		return sum3;
}
