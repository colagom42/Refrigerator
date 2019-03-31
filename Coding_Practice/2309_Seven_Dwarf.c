#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
	int arr_ht[9] = { 0 };
	int arr_true[7] = { 0 };
	
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr_ht[i]);
	}
	int sum = arr_ht[0] + arr_ht[1] + arr_ht[2] + arr_ht[3] + arr_ht[4] + arr_ht[5] + arr_ht[6] + arr_ht[7] + arr_ht[8];
	for (int i = 1; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int not_a_dwarf = 0;
			int p = 0;

			not_a_dwarf = arr_ht[i] + arr_ht[j];
			if (sum - not_a_dwarf == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						arr_true[p] = arr_ht[k];
						p++;
					}
				}
				break;
			}
			

		}
	}
	qsort(arr_true, 7, sizeof(int), compare);
	for (int i = 0; i < 7; i++)
		printf("%d\n", arr_true[i]);
}
int compare(const void *a, const void *b)
{
	int p = *(int*)a;
	int q = *(int*)b;

	if (p < q)
		return -1;
	if (p > q)
		return 1;
	else
		return 0;
}
