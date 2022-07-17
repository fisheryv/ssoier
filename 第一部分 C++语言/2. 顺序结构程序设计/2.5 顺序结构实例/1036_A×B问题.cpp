/**
 * 输入两个正整数A和B，求A×B的值。注意乘积的范围和数据类型的选择。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int a, b;
	cin >> a >> b;
	long long c = a * b;
	cout << c;
	return 0;
}