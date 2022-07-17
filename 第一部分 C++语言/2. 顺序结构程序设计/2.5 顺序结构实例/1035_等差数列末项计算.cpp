/**
 * 给出一个等差数列的前两项a1，a2，求第n项是多少。
 */
#include <cstdio>

int main()
{
	int a1, a2, n;
	scanf("%d %d %d", &a1, &a2, &n);
	int d = a2 - a1;
	int an = a1 + (n - 1) * d;
	printf("%d", an);
	return 0;
}