/**
 * 把一堆苹果分给n个小朋友，要使每个人都能拿到苹果，
 * 而且每个人拿到的苹果数都不同的话，这堆苹果至少应该有多少个？
 */
#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << sum;
	return 0;
}