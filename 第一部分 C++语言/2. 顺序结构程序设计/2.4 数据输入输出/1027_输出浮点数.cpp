/**
 * 读入一个双精度浮点数，分别按输出格式“%f”，“%f”保留5位小数，“%e”和“%g”的形式输出这个整数，每次在单独一行上输出。
 */
#include <cstdio>

int main()
{
	double a;
	scanf("%lf", &a);
	printf("%f\n%.5f\n%e\n%g", a, a, a, a);
	return 0;
}