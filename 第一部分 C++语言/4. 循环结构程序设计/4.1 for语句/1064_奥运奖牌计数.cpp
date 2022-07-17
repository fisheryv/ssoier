/**
 * 2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。
 * 现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
 * 输入第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目。
 * 输出4个整数，为A国所获得的金、银、铜牌总数及总奖牌数。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int n, g ,s, b, gsum = 0, ssum = 0, bsum = 0, sum = 0;
	cin >> n;
	for (unsigned int i = 0; i < n; i++)
	{
		cin >> g >> s >> b;
		gsum += g;
		ssum += s;
		bsum += b;
	}
	sum = gsum + ssum + bsum;
	cout << gsum << ssum << bsum << sum;
	return 0;
}