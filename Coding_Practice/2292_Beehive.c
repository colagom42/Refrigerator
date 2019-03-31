#include <stdio.h>

int main()
{
	int num;
	int path = 0;
	scanf("%d", &num);
	for (int i = 0; num > 0; i++)
	{
		if (i == 0)
		{
			num = num - 1;
			path++;
		}
		else
		{
			num = num - 6 * i;
			path++;
		}
	}
	printf("%d", path);
	
	return 0;
}

