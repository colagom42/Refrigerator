#include <stdio.h>
#include  <string.h>

int main()
{
	char line[101];

	scanf("%s", line);

	for (int i = 0; i < 26; i++)
	{
		int checker = 0;
		int tester = 0;
		char *ptr = strchr(line, 97 + i);

		for (unsigned int j = 0; j < strlen(line); j++)
		{
			if (&line[j] == ptr)
			{
				tester = j;
				checker++;
			}
		}
		if (checker == 1)
			printf("%d ", tester);
		else
			printf("-1 ");

	}
}
