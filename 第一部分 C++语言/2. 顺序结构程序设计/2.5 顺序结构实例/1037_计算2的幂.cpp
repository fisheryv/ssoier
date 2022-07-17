/**
 * 给定非负整数n，求2^n的值，即2的n次方。
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	long long ans = pow(2, n);
	cout << ans;
	return 0;
}