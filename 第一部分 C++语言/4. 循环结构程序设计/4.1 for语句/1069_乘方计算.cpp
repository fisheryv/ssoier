/**
 * 给出一个整数a和一个正整数n(−1000000≤a≤1000000，1≤n≤10000)，
 * 求乘方a^n，即乘方结果。最终结果的绝对值不超过1000000
 */
#include <iostream>

using namespace std;

int main()
{
	long a, n, product = 1;
	cin >> a >> n;
	for (int i = 0; i < n; i++)
	{
		product *= a;
	}
	cout << product;
	return 0;
}