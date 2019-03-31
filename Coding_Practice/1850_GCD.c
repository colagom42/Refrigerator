#include <stdio.h>

long long int gcd(long long int p, long long int q) { if (p == 0) return q; return gcd(q%p, p); }

int main()
{
	long long int a, b;
	
	scanf("%lld %lld", &a, &b);
	long long int gcd_ab = gcd(a, b);
	for(int i = 0; i < gcd_ab; i++)
	printf("1");
}
