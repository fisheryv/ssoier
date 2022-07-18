/**
 * 我们曾经输出过的“Hello, World!”吗？
 * 我们同样可以用sizeof函数获得它所占用的空间大小。
 */
#include <iostream>

using namespace std;

int main()
{
	int ans = sizeof("Hello, World!");
	cout << ans;
	return 0;
}
