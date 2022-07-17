/**
 * 任意输入一个字符，判断其ASCII是否是奇数，
 * 若是，输出YES，否则，输出NO。
 * 例如，字符A的ASCII值是65 ，则输出YES，若输入字符B(ASCII值是66)，则输出NO。
 */
#include <iostream>

using namespace std;

int main()
{
	char a;
	cin >> a;
	int b = a;
	if (b % 2 == 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}