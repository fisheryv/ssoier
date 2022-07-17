/**
 * 将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？
 */
#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	bool b = a;
	a = b;
	cout << a;
	return 0;
}
