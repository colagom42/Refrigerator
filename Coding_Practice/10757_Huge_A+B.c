#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int k = 0;
	char num_1[10001] = { 0 }, num_2[10001] = { 0 };
	int num_sum[10002] = { 0 };
	char num_1_fixed[10001] = { 0 }, num_2_fixed[10001] = { 0 };
	scanf("%s %s", num_1, num_2);
	int num_1_len = strlen(num_1);
	int num_2_len = strlen(num_2);
	if  (num_1_len > num_2_len)
	{
		for (int i = 0; i < num_1_len - num_2_len; i++)
			num_2_fixed[i] = 48;
		strcat(num_2_fixed, num_2);
	}
	else
	{
		for (int i = 0; i < num_2_len - num_1_len; i++)
			num_1_fixed[i] = 48;
		strcat(num_1_fixed, num_1);
	}
	if (num_1_len > num_2_len)
	{
		for (int i = num_1_len - 1; i >= 0; i--)
		{
			num_sum[i + 1] += num_1[i] + num_2_fixed[i] - 96;
			if (num_sum[i + 1] > 9)
			{
				num_sum[i]++;
				num_sum[i + 1] -= 10;
			}
		}
	}
	else
	{
		for (int i = num_2_len - 1; i >= 0; i--)
		{
			num_sum[i + 1] += num_1_fixed[i] + num_2[i] - 96;
			if (num_sum[i + 1] > 9)
			{
				num_sum[i]++;
				num_sum[i + 1]-=10;
			}
		}
	}
	if (num_sum[0] == 0)
			k++;
	if (num_1_len > num_2_len)
	{
		
		for (int i = k; i < num_1_len + 1; i++)
		{
	
				printf("%d", num_sum[i]);
		}
	}
	else
	{
		for (int i = k; i < num_2_len + 1; i++)
		{
				printf("%d", num_sum[i]);
		}
	}

}

