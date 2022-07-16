/**
 * 利用公式 C=5×(F−32)÷9(其中C表示摄氏温度，F表示华氏温度)进行计算转化,
 * 输入华氏温度F，输出摄氏温度C，要求精确到小数点后5位。
 */
#include <cstdio>

int main()
{
	double c, f;
	scanf("%lf", &f);
	c = 5 * (f - 32) / 9;
	printf("%.5lf", c);
	return 0;
}