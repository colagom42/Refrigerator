#include <stdio.h>


int main()
{
	int num;
	int tenth, oneth;
	int cycles = 0;
	int result;

	scanf("%d", &num);

	result = num;

	while (1) {

		tenth = result / 10;
		oneth = result % 10;


		result = tenth + oneth;

		result = oneth * 10 + (result % 10);

		cycles++;

		if (result == num) {
			break;
		}

	}

	printf("%d\n", cycles);


	return 0;

}

