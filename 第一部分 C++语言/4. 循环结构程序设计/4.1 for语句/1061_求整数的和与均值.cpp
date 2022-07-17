/**
 * 读入n(1≤n≤10000)个整数，求它们的和与均值。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	unsigned int n;
	int a, sum = 0;
	cin >> n;
	for (unsigned int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
	}
	double avg = sum / (n * 1.0);
	printf("%d %.5lf", sum, avg);
	return 0;
}