/**
 * 计算两个双精度浮点数a和b的相除的余数，a和b都是双精度浮点数。
 * 这里余数（r）的定义是：a=k×b+r，其中k是整数，0≤r<b
 */
#include <cstdio>

int main()
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	int k = int(a / b);
	double r = a - k * b;
	printf("%lf", r);
	return 0;
}