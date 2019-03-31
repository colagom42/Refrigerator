#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0, X = 0;
	scanf("%d %d", &N, &X);
	int *arr = malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if(arr[i] < X)
			printf("%d ", arr[i]);
	}

	return 0;

}


