/**
 * 某饮料公司最近推出了一个“收集瓶盖赢大奖”的活动：
 * 如果你拥有10个印有“幸运”、或20个印有“鼓励”的瓶盖，就可以兑换一个神秘大奖。
 * 现分别给出你拥有的印有“幸运”和“鼓励”的瓶盖数，判断是否可以去兑换大奖。
 * 若可以兑换大奖，输出1，否则输出0。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int x, g;
	cin >> x >> g;
	if (x >= 10 || g >= 20)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}