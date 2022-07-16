/**
 * 输入仅一行，有两个整数，第一个为确诊数，第二个为死亡数。
 * 输出仅一行，甲流死亡率，以百分数形式输出，精确到小数点后3位。
 */
#include <cstdio>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	double p = b * 100.0 / a;
	printf("%.3lf%%", p);
	return 0;
}