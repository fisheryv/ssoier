/**
 * 给定一个长度为n的非负整数序列，请计算序列的最大跨度值(最大跨度值 = 最大值减去最小值)。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int n, a, max = 0, min = 1000;
	cin >> n;
	for (unsigned int i = 0; i < n; i++)
	{
		cin >> a;
		if (a > max)
			max = a;
		else if (a < min)
			min = a;
	}
	int d = max - min;
	cout << d;
	return 0;
}