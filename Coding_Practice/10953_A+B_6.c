#include <stdio.h>
int main()
{
	int case_num;
	scanf("%d", &case_num);
	for (int i = 0; i < case_num; i++)
	{
		char line[4];
		int sum;
		scanf("%s", line);
		sum = line[0] + line[2] - 96;
		printf("%d\n", sum);
	}
}

