/**
 * 计算非负整数m到n(包括m和n)之间的所有奇数的和，
 * 其中，m不大于n，且n不大于300。
 * 例如 m=3,n=12, 其和则为：3+5+7+9+11=35
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int m, n, sum = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			 sum += i;
		}
	}
	cout << sum;	
	return 0;
}