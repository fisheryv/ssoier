/**
 * 输入两个整数，比较它们的大小。若x>y，输出>；若x=y，输出=；若x<y，输出<。
 */
#include <iostream>

using namespace std;

int main()
{
	long x, y;
	cin >> x >> y;
	if (x > y)
	{
		cout << ">";
	}
	else if (x == y)
	{
		cout << "=";
	}
	else
	{
		cout << "<";
	}
	return 0;
}