#include <stdio.h>
int main()
{
	char toy[5][16] = { 0 };
	int k = 0;
	for (int j = 0; j < 5; j++)
	{
		scanf(" %[^\n]", &toy[j]);
		
	}
		for (int j = 0; j < 15; j++)
		{
			for (int i = 0; i < 5; i++)
			if(toy[i][j] != 0)
				printf("%c", toy[i][j]);
		}
}

