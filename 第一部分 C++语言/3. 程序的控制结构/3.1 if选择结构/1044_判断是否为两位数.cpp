/**
 * 判断一个正整数是否是两位数(即大于等于10且小于等于99)。
 * 若该正整数是两位数，输出1，否则输出0。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int a;
	cin >> a;
	if (a >= 10 && a <= 99)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}