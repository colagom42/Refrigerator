#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	scanf("%d", &num);
	do {
		num = num - i;
		i++;
	} while ( num > 0 );
	i--;
	if (i % 2 == 0)
	{
		num = 1 - num;
	}
	else num = i + num;
	printf("%d/%d\n", i + 1 - num,  num);
	
	return 0;
}

