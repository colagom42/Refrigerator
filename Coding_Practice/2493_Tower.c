#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tower_num;
	scanf("%d", &tower_num);
	int *line = malloc(sizeof(int)*tower_num);
	int *line_2 = malloc(sizeof(int)*tower_num);
	for (int i = 0; i < tower_num; i++)
	{
		scanf("%d", &line[i]);
		line_2[i] = 0;
	}
	for (int i = tower_num - 1; i >= 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			if (line[i] < line[j - 1])
			{
				line_2[i] = j;
				break;
			}
		}
	}
	for (int i = 0; i < tower_num; i++)
	{
		printf("%d ", line_2[i]);
	}

	return 0;
}

