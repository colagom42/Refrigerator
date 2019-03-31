#include <stdio.h>
#include  <string.h>
int main()
{
	
	int word_num;
	for (int i = 0; i < 26; i++)
	scanf("%d", &word_num);
	int sum = word_num;
	for (int i = 0; i < word_num; i++)
	{
		char line[100] = { 0, };
		scanf("%s", line);
		for (unsigned int j = 0; line[j] != 0; j++)
		{
			if (line[j] == line[j + 1])
			{
				for (int k = j; line[k] != 0; k++)
				{
					line[k] = line[k + 1];
				}
				j--;
			}
			else
				continue;
		}
		
		for (int j = 0; j < 26; j++)
		{
			int num2 = 0;
			char *ptr2 = strchr(line, 97 + j);
			for (; ptr2 != NULL; num2++ )
				{
					ptr2 = strchr(ptr2 + 1, 97 + j);
				}
			if (num2 > 1)
			{
				sum--;
				break;
			}
			else
				continue;
		}
	}
	printf("%d\n", sum);
		

	return 0;
}

