#include <stdio.h>

int gcd(int p, int q) { if (p == 0) return q; return gcd(q%p, p); }

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	int gcd_ab = gcd(a, b);
	printf("%d\n", gcd_ab);
	printf("%d\n", a * b / gcd_ab);
}
