/**
 * 对于半径为 r 的球，其体积的计算公式为V=(4/3)πr^3，这里取 π=3.14。
 * 现给定 r，即球半径，类型为double，求球的体积V，保留到小数点后2位。
 */

#include <cstdio>

const double pi = 3.14;

int main()
{
	double r;
	scanf("%lf", &r);
	double v = (4.0 / 3) * pi * r * r * r;
	printf("%.2lf", v);
	return 0;
}