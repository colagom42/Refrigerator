#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1 - 1; j > 0; j--)
		{
			printf(" ");
		}
		
		for (int k = num - i; k > 0; k--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
