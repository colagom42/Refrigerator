#include <stdio.h>
#include <string.h>

int main()
{
	char line[101];
	char chro_alpha[8][4] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	
	scanf("%s", line);
	int num = strlen(line);
	for (int i = 0; i < 8; i++)
	{
		char *ptr = strstr(line, chro_alpha[i]);
		for (; ptr != NULL; num--)
			ptr = strstr (ptr + 1, chro_alpha[i]);
	}
	printf("%d\n", num);
	
	return 0;
}
