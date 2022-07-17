/**
 * 判断一个数n 能否同时被3和5整除，如果能同时被3和5整除输出YES，否则输出NO。
 */
#include <iostream>

using namespace std;

int main()
{
	long n;
	cin >> n;
	if (n % 5 == 0 && n % 3 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}