#include <stdio.h>
int main()
{
	int cars[5];
	int day;
	int count = 0;

	scanf("%d", &day);
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &cars[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (day == cars[i])
			count++;
	}
	printf("%d\n", count);

	return 0;
}

