/**
 * 给定一个字符，用它构造一个对角线长5个字符，倾斜放置的菱形。
 */
#include <iostream>

using namespace std;

int main()
{
	char a;
	cin >> a;
	cout << "  " << a << endl;
	cout << " " << a << a << a << endl;
	cout << a << a << a << a << a << endl;
	cout << " " << a << a << a << endl;
	cout << "  " << a << endl;
	return 0;
}