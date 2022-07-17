/**
 * 输入三个整数，数与数之间以一个空格分开。 输出一个整数，即最大的整数。
 */
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
    int max = a > b ? a : b;
    max = max > c ? max : c;
	cout << max;
	return 0;
}