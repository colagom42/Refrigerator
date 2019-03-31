#include <stdio.h>
#include <stdlib.h>

void strrev(char a[4]);

int main()
{
	char arr_num_a[4], arr_num_b[4];

	scanf("%s %s", arr_num_a, arr_num_b);

	strrev(arr_num_a);
	strrev(arr_num_b);

	if (atoi(arr_num_a) > atoi(arr_num_b))
		printf("%s\n", arr_num_a);
	else
		printf("%s\n", arr_num_b);

	return 0;
}

void strrev(char a[4])
{
	char temp;
	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
}
