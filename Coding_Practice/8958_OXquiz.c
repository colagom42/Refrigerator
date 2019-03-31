#include <stdio.h>
#include <string.h>

int main()
{	
	char OX[81];
	int case_num;
	scanf("%d", &case_num);
	for (int i = 0; i < case_num; i++)
	{
		int sum = 0;
		int combo = 0;
		scanf("%s", OX);
		for (unsigned int j = 0; j < strlen(OX); j++)
		{
			
			if (OX[j] == 79)
			{
				combo = combo + 1;
				sum = sum + combo;
			}
			else
				combo = 0;
		}
		printf("%d\n", sum);
	}

	return 0;
}
