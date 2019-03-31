#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < num - i - 1; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
