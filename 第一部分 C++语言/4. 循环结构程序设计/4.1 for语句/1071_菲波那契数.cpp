/**
 * 菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。
 * 给出一个正整数k，要求菲波那契数列中第k个数是多少。
 */
#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 1, c = 0, k;
	cin >> k;
	for (int i = 3; i <= k ; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	cout << c;
	return 0;
}