/**
 * 输入一个浮点数，输出这个浮点数的绝对值，保留到小数点后两位。
 */
#include <cmath>
#include <cstdio>

int main()
{
	double a, result;
	scanf("%lf", &a);
    //result = abs(a);
    result = a < 0 ? -a : a;
	printf("%.2lf", result);
	return 0;
}