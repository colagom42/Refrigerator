#include <stdio.h>
int main()
{


	int line_check[3] = { 1, 1, 1 };
	int line_check_check[3] = { 1, 1, 1 };
	for (int i = 0; i < 3; i++)
	{
		char line[9] = { 0 };
		scanf("%s", line);
		for (int j = 0; j < 7; j++)
		{
			if (line[j] == line[j + 1])
			{
				line_check[i]++;
				if (line_check_check[i] < line_check[i])
				{
					line_check_check[i] = line_check[i];
				}
			}
			else
				line_check[i] = 1;
		}
	
	}
	for (int i = 0; i < 3; i++) 
	{
		printf("%d\n", line_check_check[i]);
	}
	return 0;
}

