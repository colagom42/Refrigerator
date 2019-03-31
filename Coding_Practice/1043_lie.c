#include <stdio.h>
int main()
{
	int ppl_num, prty_num;
	int watchman;
	int arr_ppl[50][51] = { 0 };
	int arr_cheker[50][50] = { 0 };
	int lied_party = 0;
	scanf("%d %d", &ppl_num, &prty_num);
	scanf("%d", &watchman);
	for (int i = 0; i < watchman; i++)
	{
		int watchman_num = 0;
		scanf("%d", &watchman_num);
		for (int j = 0; j < 50; j++) {
			arr_ppl[j][watchman_num - 1] = 2;//2 for lie detector
		}
	}
	for (int i = 0; i < prty_num; i++)
	{
		int lie = 1;
		scanf("%d", &arr_ppl[i][50]);
		for (int j = 0; j < arr_ppl[i][50]; j++)
		{
			int who;
			scanf("%d", &who);
			arr_cheker[i][j] = who - 1;
		}
	
	} 
	for(int q = 0; q < prty_num; q++){
		for (int l = 0; l < prty_num; l++)
		{
			for (int j = 0; j < arr_ppl[l][50]; j++)
			{
				if (arr_ppl[l][arr_cheker[l][j]] == 2)
				{
					for (int p = 0; p < arr_ppl[l][50]; p++) {

						for (int k = 0; k < 50; k++)
						{
							arr_ppl[k][arr_cheker[l][p]] = 2;//2 for lie detector
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < prty_num; i++)
	{
		int checker = 0;
		for (int j = 0; j < arr_ppl[i][50]; j++)
		{
			if (arr_ppl[i][arr_cheker[i][j]] == 2)
			{
				checker = 1;
			}
		}
		if (checker == 0)
			lied_party++;
	}
	printf("%d\n", lied_party);
	
	return 0;
}

