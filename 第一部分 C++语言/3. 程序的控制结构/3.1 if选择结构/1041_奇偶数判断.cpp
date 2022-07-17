/**
 * 给定一个整数，判断该数是奇数还是偶数。如果n是奇数，输出odd；如果n是偶数，输出even。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int a;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "even";
	}
	else
	{
		cout << "odd";
	}
	return 0;
}