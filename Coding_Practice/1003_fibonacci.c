#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row;
	
	scanf("%d", &row);
	
	int *arr = malloc(sizeof(int*) *row);

	for (int i = 0; i < row; i++)
	{
		scanf("%d", &arr[i]);
	}

	int arr2[41];

	arr2[0] = 1;
	arr2[1] = 1;


	for (int i = 2; i < 41; i++)
	{
		arr2[i] = arr2[i - 2] + arr2[i - 1];
	}

	for (int i = 0; i < row; i++)
	{
		if (arr[i] == 0)
			printf("1 0\n");
		else if (arr[i] == 1)
			printf("0 1\n");

		else
			printf("%d %d\n", (arr2[arr[i] - 2]), (arr2[arr[i] - 1]));
	}
	return 0;
}
