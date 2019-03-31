#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M, K;
	scanf("%d %d", &N, &M);
	int ** D_arr_A = malloc(sizeof(int *)* N);
	for (int i = 0; i < N; i++)
		D_arr_A[i] = malloc(sizeof(int) * M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			scanf("%d", &D_arr_A[i][j]);
		}
	}
	scanf("%d %d", &M, &K);
	int ** D_arr_B = malloc(sizeof(int *)* M);
	for (int i = 0; i < M; i++)
		D_arr_B[i] = malloc(sizeof(int) * K);
	for (int i = 0; i < M ; i++)
	{
		for (int j = 0; j < K; j++) {
			scanf("%d", &D_arr_B[i][j]);
		}
	}
	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j < K; j++)
		{
			int sum = 0;
			for (int p = 0; p < M; p++)
			{
				
				sum += D_arr_A[i][p] * D_arr_B[p][j];
			}
			
			printf("%d ", sum);
		}
		printf("\n");
	}
	return 0;
}
