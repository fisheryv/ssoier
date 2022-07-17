/**
 * 利用一元二次方程求根公式，求一元二次方程ax^2+bx+c=0的根，其中a不等于0。
 * 结果要求精确到小数点后5位。
 */
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double delta = b * b - 4 * a * c;
	if (delta < 0)
    {
		cout << "No answer!";
    }
	else if (delta == 0)
	{
		double x = -b / (2 * a);
		printf("x1=x2=%.5lf", x);
	}
	else
	{
		double s = sqrt(delta);
		double x1 = (-b - s) / (2 * a);
		double x2 = (-b + s) / (2 * a);
		if (x1 < x2)
			printf("x1=%.5lf;x2=%.5lf", x1, x2);
		else
			printf("x1=%.5lf;x2=%.5lf", x2, x1);
	}
	return 0;
}