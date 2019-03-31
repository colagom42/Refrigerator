#include <stdio.h>
#include <string.h>

int main()
{
	char line[1000001];
	int num = 1;

	scanf("%[^\n]", line);
	if (strlen(line) == 1 && line[0] == 32)
		printf("0\n");
	else
	{
		for (unsigned int i = 0; i < strlen(line) - 2; i++)
		{
			if (line[i] != 32 && line[i + 1] == 32 && line[i+2] != 32)
			{
				num++;
			}
		}
		printf("%d", num);
	}

	return 0;
}

