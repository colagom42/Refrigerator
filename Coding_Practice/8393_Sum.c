#include <stdio.h>

int main()
{
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		sum = sum + i + 1;
	}

	printf("%d\n", sum);

	return 0;
}
