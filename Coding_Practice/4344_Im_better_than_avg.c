#include <stdio.h>
#include <stdlib.h>

void swap(float *a, float *b);

int main()
{

	int N, P = 0;
	
	scanf("%d", &P);

	for (int i = 0; i < P; i++)
	{
		float avrg = 0;
		float rate = 0;

		scanf("%d", &N);

		float *arr = malloc(sizeof(float) * N);

		for (int j = 0; j < N; j++)
		{
			scanf("%f", &arr[j]);
			avrg = avrg + arr[j];
		}

		avrg = avrg / N;

		for (int k = 0; k < N; k++)
		{
			if (arr[k] > avrg)
			{
				rate++;
			}
		}

		printf("%.3f%%\n", rate / N * 100);
		free(arr);
	}

	

	return 0;

}
