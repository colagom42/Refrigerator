#include <stdio.h>

long long int gcd(long long int p, long long int q) { if (p == 0) return q; return gcd(q%p, p); }

int main()
{
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", a * b / gcd(a, b));
}
