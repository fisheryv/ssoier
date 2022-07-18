/**
 * 我国现有x亿人口，按照每年0.1%的增长速度，n年后将有多少人？保留小数点后四位。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
    double product = x;
	for (int i = 0; i < n; i++)
	{
		product *= 1.001;
	}
	printf("%.4lf", product);
	return 0;
}