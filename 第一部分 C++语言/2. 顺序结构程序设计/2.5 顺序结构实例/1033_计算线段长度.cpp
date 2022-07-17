/**
 * 已知线段的两个端点的坐标A(Xa,Ya)，B(Xb，Yb)，求线段AB的长度，保留到小数点后3位。
 */
#include <cstdio>
#include <cmath>

int main()
{
	double xa, ya, xb, yb;
	scanf("%lf %lf", &xa, &ya);
	scanf("%lf %lf", &xb, &yb);
	double a = xa - xb;
	double b = ya - yb;
	double c = sqrt(a * a + b * b);
	printf("%.3lf", c);
	return 0;
}