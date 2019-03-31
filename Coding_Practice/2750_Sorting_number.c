#include <stdio.h>
int main()
{
	int case_num;
	int num[1000];
	scanf("%d", &case_num);
	for (int o = 0; o < case_num; o++)
	{
		scanf("%d", &num[o]);
	}
	for (int o = case_num-1; o > 0; o--)
	{
		for (int i = 0; i < o; i++)
		{
			if (num[i] > num[i + 1])
			{
				int temp;
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}
	for (int o = 0; o < case_num; o++)
	{
		printf("%d\n", num[o]);
	}

	return 0;
}
