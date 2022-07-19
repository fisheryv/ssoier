/**
 * 编写程序，输入n的值，求1/1−1/2+1/3−1/4+1/5−1/6+1/7−1/8+...+(−1)^(n−1)/n的值。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	double sum = 0.0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		double f = 1.0 / i;
		if (i % 2 == 0)
		{
			f = -f;
		}
		sum += f;
	}
	printf("%.4lf", sum);
	return 0;
}