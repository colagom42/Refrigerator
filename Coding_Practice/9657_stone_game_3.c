#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);

	if (a % 7 == 2 || a % 7 == 0)
		printf("CY\n");
	else
		printf("SK\n");
}
