/**
 * 对于多项式f(x)=ax^3+bx^2+cx+d和给定的a,b,c,d,x，计算f(x)的值，保留到小数点后7位。
 */
#include <cstdio>

int main()
{
	double x, a, b, c, d;
	scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
	double s = a * x * x * x + b * x * x + c * x + d;
	printf("%.7lf", s);
	return 0;
}