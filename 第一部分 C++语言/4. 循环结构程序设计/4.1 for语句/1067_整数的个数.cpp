/**
 * 给定k(1<k<100)个正整数，其中每个数都是大于等于1，小于等于10的数。
 * 写程序计算给定的k个正整数中，1，5和10出现的次数。
 */
#include <iostream>

using namespace std;

int main()
{
	int k, n;
	int sum1 = 0, sum5 = 0, sum10 = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		switch(n)
		{
		case 1:
			sum1++;
			break;
		case 5:
			sum5++;
			break;
		case 10:
			sum10++;
			break;
		}
	}
	cout << sum1 << endl << sum5 << endl << sum10;	
	return 0;
}