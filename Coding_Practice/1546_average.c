#include <stdio.h>
#include <stdlib.h>

void swap(float *a, float *b);

int main()
{
	float avrg = 0;
	int N = 0;
	
	scanf("%d", &N);

	float *arr = malloc(sizeof(float) * N);


	for (int i = 0; i < N; i++)
	{
		scanf("%f", &arr[i]);
	}

	for (int i = 0; i < N - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			swap(&arr[i], &arr[i + 1]);
	}

	for (int i = 0; i < N; i++)
	{
		avrg = avrg + arr[i];
	}

	printf("%.2f\n", avrg / arr[N - 1] * 100/N);
	

	return 0;

}
void swap(float *a, float *b)
{
	float temp;

	temp = *a;

	*a = *b;

	*b = temp;
}

