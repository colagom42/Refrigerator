#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);

	if (a % 7 == 1 || a % 7 == 3)
		printf("CY\n");
	else
		printf("SK\n");
}
