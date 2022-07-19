/**
 * 给定若干个四位数，求出其中满足以下条件的数的个数：
 * 个位数上的数字减去千位数上的数字，再减去百位数上的数字，再减去十位数上的数字的结果大于零。
 */
#include <iostream>

using namespace std;

int main()
{
	int n, a, sum = 0, st, nd, rd, th;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		st = a / 1000;
		nd = a / 100 % 10;
		rd = a / 10 % 10;
		th = a % 10;
		if (th - st - nd - rd > 0)
		{
			sum++;
		}
	}
	cout << sum;
	return 0;
}