#include <stdio.h>
#include <stdlib.h>

int main()
{
	char line[101];

	for (int i = 0; i < 100; i++)
	{
		gets(line);
		printf("%s\n", line);
		for (int j = 0; j < 101; j++)
		{
			line[j] = 0;
		}
	}
}
