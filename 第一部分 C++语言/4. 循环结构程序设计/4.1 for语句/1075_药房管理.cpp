/**
 * 现在药房的管理员希望使用计算机来帮助他管理。
 * 假设对于任意一种药品，每天开始工作时的库存总量已知，并且一天之内不会通过进货的方式增加。
 * 每天会有很多病人前来取药，每个病人希望取走不同数量的药品。
 * 如果病人需要的数量超过了当时的库存量，药房会拒绝该病人的请求。
 * 管理员希望知道每天会有多少病人没有取上药。
 */
#include <iostream>

using namespace std;

int main()
{
	int s, n, num, sum = 0, p = 0;
	cin >> s >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num;
		if (sum + num > s)
		{
			p++;
		}
		else
		{
			sum += num;
		}
	}
	cout << p;
	return 0;
}