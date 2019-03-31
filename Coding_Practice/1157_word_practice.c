#include <stdio.h>
#include  <string.h>
int main()
{
	char line[1000001];
	int alphabet[26] = { 0, };
	int alphabet_test[26];
		for (int j = 0; j < 26; j++)
			alphabet_test[j] = 65 + j;
	scanf("%s", line);
		
		for (int i = 0; i < 26; i++)
		{
			int num1 = 0;
			int num2 = 0;
			char *ptr = strchr(line, 65 + i);
				for (; ptr != NULL; num1++)
				{
					ptr = strchr(ptr + 1, 65 + i);
				}
			char *ptr2 = strchr(line, 97 + i);
				for (; ptr2 != NULL; num2++)
				{
					ptr2 = strchr(ptr2 + 1, 97 + i);
				}
				alphabet[i] = num1 + num2;
		}
	for (int i = 0; i < 25; i++)
		{
		if (alphabet[i] > alphabet[i + 1])
		{
			int temp;
			temp = alphabet[i];
			alphabet[i] = alphabet[i + 1];
			alphabet[i + 1] = temp;
			temp = alphabet_test[i];
			alphabet_test[i] = alphabet_test[i + 1];
			alphabet_test[i + 1] = temp;
		}
		
		}
	for (int i = 0; i < 25; i++)
	{
		if (alphabet[i] > alphabet[i + 1])
		{
			int temp;
			temp = alphabet[i];
			alphabet[i] = alphabet[i + 1];
			alphabet[i + 1] = temp;
			temp = alphabet_test[i];
			alphabet_test[i] = alphabet_test[i + 1];
			alphabet_test[i + 1] = temp;
		}

	}
	if (alphabet[25] == alphabet[24])
		printf("?\n");
	else
		printf("%c\n", alphabet_test[25]);
	return 0;
}

