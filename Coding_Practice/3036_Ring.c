#include <stdio.h>

int gcd(int p, int q) { if (p == 0) return q; return gcd(q%p, p); }

int main()
{
	int case_num;
	int num_arr[100];
	scanf("%d", &case_num);
	for(int i = 0; i < case_num; i++)
	{
		scanf("%d", &num_arr[i]);
	}
	for (int i = 0; i < case_num - 1; i++)
	{
		int gcd_ab = gcd(num_arr[0], num_arr[i + 1]);
		printf("%d/%d\n", num_arr[0] / gcd_ab , num_arr[i+1] / gcd_ab );
	}
}
