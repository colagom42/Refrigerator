#include <stdio.h>

int main()
{
	int test_cases;
	scanf("%d", &test_cases);
	for (int i = 0; i < test_cases; i++)
	{
		int arr[15][14] = { 0, };
		int p, q;
		scanf("%d %d", &p, &q);
		for (int j = 1; j < 15; j++)
		{
			arr[0][j - 1] = j;
		}
		for (int j = 1; j < 15; j++)
		{
			for (int k = 0; k < 14; k++)
			{

				for (int l = 0; l <= k; l++)
				{
					arr[j][k] = arr[j][k] + arr[j - 1][l];
				}

			}
		}
		printf("%d\n", arr[p][q-1]);
	}
	
	return 0;
}
