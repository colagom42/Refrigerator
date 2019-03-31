#include <stdio.h>

int gcd(int p, int q) { if (p == 0) return q; return gcd(q%p, p); }

int main()
{
	int case_num;
	scanf("%d", &case_num);
	for (int i = 0; i < case_num; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a * b / gcd(a, b));
	}
}
