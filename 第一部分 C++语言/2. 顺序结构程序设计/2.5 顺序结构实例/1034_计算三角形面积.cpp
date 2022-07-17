/**
 * 平面上有一个三角形，它的三个顶点坐标分别为(x1,y1),(x2,y2),(x3,y3)，
 * 那么请问这个三角形的面积是多少，精确到小数点后两位。
 */
#include <cstdio>
#include <cmath>

int main()
{
	float x1, y1, x2, y2, x3, y3;
	scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    // 利用海伦公式求三角形面积
	double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.2lf", s);
	return 0;
}