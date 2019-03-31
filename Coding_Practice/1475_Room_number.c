#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };

	char nums[1000001];

	scanf("%s", nums);

	for (int i = 0; i < 10; i++)
	{
		char *ptr = strchr(nums, 48 + i);
		for (; ptr != NULL; arr[i]++)
			ptr = strchr(ptr + 1, 48 + i);
	}
	arr[6] = (arr[6] + arr[9]) / 2 + (arr[6] + arr[9]) % 2;
	arr[9] = arr[6];
	for (int i = 0; i < 9; i++)
	{
		int temp;
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	printf("%d\n", arr[9]);
	return 0;
}

