#include <stdio.h>
#include  <string.h>

int main()
{
	int case_num;


	scanf("%d", &case_num);

	for (int i = 0; i < case_num; i++)
	{
		int times = 0;
		char line[161] = { 0, };
		scanf("%d", &times);
		scanf("%s", line);
		for (unsigned int j = 0; j < strlen(line); j++)
		{
			for (int k = 0; k < times; k++)
			{
				printf("%c", line[j]);
			}
		}
		printf("\n");
	}
	

}
