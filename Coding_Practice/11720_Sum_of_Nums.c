#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cases;
	int sum = 0;

	scanf("%d", &cases);

	char *arr = malloc(sizeof(int) * cases);

	scanf("%s", arr);

	for (int i = 0; i < cases; i++)
	{
		sum = sum + arr[i] - 48;
	}

	printf("%d\n", sum);

	return 0;
}

