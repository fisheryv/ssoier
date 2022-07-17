/**
 * 判断某年是否是闰年。如果公元a年是闰年输出Y，否则输出N。
 */
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		cout << "Y";
	else
		cout << "N";
	return 0;
}