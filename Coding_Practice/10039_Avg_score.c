#include <stdio.h>

int main()
{	
	int score[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] < 40)
			score[i] = 40;
	}
	printf("%d\n", (score[0] + score[1] + score[2] + score[3] + score[4]) / 5);
}
