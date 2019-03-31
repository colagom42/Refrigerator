#include <stdio.h>

int main()
{
	char word[15];
	int sum = 0;
	scanf("%s", word);
	for (int i = 0; word[i] != 0; i++)
	{
		if (word[i] < 83)
			word[i] = (word[i] - 65 + 6) / 3 + 1;
		else if (word[i] == 83)
			word[i] = 8;
		else if (word[i] < 90)
			word[i] = (word[i] - 65 + 5) / 3 + 1;
		else
			word[i] = 10;

			sum = sum + word[i];
	}
	printf("%d\n", sum);
	
	return 0;
}

