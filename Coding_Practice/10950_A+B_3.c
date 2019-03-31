#include <stdio.h>
int main()
{
	int case_num;

	scanf("%d", &case_num);

	for (int o = 0;o < case_num;o++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}

