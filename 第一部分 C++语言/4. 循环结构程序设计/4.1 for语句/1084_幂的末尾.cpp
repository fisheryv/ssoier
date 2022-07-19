/**
 * 幂a^b的末3位数是多少？
 */
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int r = 1;
	for (; b; b >>= 1, a = a * a % 1000)
	{
		if (b & 1)
		{
			r = r * a % 1000;
		}
	}
	if (r < 100)
	{
		cout << 0;
		if (r < 10)
		{
			cout << 0;
		}
	}
	cout << r;
	return 0;
}