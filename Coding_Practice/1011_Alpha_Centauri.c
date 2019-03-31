#include <stdio.h>
#include <math.h>

int main()
{
	int test_cases;
	scanf("%d", &test_cases);
	for (int i = 0; i < test_cases; i++)
	{
		double x, y;
		double dist;
		double active;
		scanf("%lf %lf", &x, &y);
		dist = y - x;
		double dist_root_int = trunc(sqrt(dist));
		if (pow(dist_root_int, 2) + dist_root_int < dist)
		{
			active = dist_root_int * 2 + 1;
		}
		else if (pow(dist_root_int, 2) == dist)
		{
			active = dist_root_int * 2 - 1;
		}
		else
			active = dist_root_int * 2;
		printf("%.0lf\n", active);
	}
	
	return 0;
}

