/**
 * 给出一组样本数据，包含n个浮点数，计算其均值，精确到小数点后4位。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	unsigned int n;
	double m, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		sum += m;
	}
	double avg = sum / n;
	printf("%.4lf", avg);
	return 0;
}