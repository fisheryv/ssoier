/**
 * 一个最简单的计算器，支持+, -, *, / 四种运算。
 * 仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。然而：
 * 1. 如果出现除数为0的情况，则输出：Divided by zero!
 * 2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!
 */
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	char op;
	cin >> a >> b >> op;
	switch(op)
	{
		case '+': cout << a + b;break;
		case '-': cout << a - b;break;
		case '*': cout << a * b;break;
		case '/': b == 0 ? cout << "Divided by zero!" : cout << a / b;break;
		default: cout << "Invalid operator!"; 
	}
	return 0;
}