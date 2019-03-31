#include <stdio.h>

int main()
{
	int test_cases;
	scanf("%d", &test_cases);
	for (int i = 0; i < test_cases; i++)
	{
		int N, H, W;

		scanf("%d %d %d", &H, &W, &N);
		int floor = N % H;
		int room = N / H + 1;
		if (floor == 0)
		{
			floor = H;
			room = N / H;
		}

		printf("%d\n", floor * 100 + room);
	}
	
	return 0;
}
