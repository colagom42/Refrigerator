#include <stdio.h>

int main()
{

	char arr[101] = { 0, };

	scanf("%s", arr);

	for (int i = 0; i < 10; i++)
	{
		if (arr[10 * i] != 0)
		{
			printf("%.*s\n", 10, &arr[0 + 10 * i]);
		}
		else
			break;
	}




	return 0;
}
