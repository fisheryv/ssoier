/**
 * 给出圆的半径，求圆的直径、周长和面积。
 * 输入圆的半径实数r，输出圆的直径、周长、面积，每个数保留小数点后4位。
 * 圆周率取值为3.14159
 */
#include <cstdio>

const double pi = 3.14159;

int main()
{
	double r, d, c, s;
	scanf("%lf", &r);
	d = 2 * r;
	c = 2 * pi * r;
	s = pi * r * r;
	printf("%.4lf %.4lf %.4lf", d, c, s);
	return 0;
}