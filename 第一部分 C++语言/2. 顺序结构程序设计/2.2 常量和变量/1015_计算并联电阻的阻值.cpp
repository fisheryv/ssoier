/**
 * 对于阻值为 r1 和 r2 的电阻，其并联电阻阻值公式计算如下：R=1/(1/r1+1/r2)。
 * 输入两个电阻阻抗大小，浮点型。输出并联之后的阻抗大小，结果保留小数点后2位。
 */
#include <cstdio>

int main()
{
	double t1, t2, r;
	scanf("%lf %lf", &t1, &t2);
	r = 1 / (1 / t1 + 1 / t2);
	printf("%.2lf", r);
	return 0;
}