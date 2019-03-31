#include <stdio.h>
#include <string.h>
int main()
{
	char arr[14];
	scanf("%s", arr);

	int lng = strlen(arr) - 1;
	int sum = arr[lng];
	if (sum % 2 == 1)
		printf("SK\n");
	else
		printf("CY\n");
}
