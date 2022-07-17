/**
 * 一只大象口渴了，要喝20升水才能解渴，
 * 但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。
 * 问大象至少要喝多少桶水才会解渴。
 */
#include <cstdio>
#include <cmath>

const double pi = 3.14;

int main()
{
	int r, h;
	scanf("%d %d", &h, &r);
	double v = pi * r * r * h;
	int b = ceil(20 * 1000 / v);
	printf("%d", b);
	return 0;
}