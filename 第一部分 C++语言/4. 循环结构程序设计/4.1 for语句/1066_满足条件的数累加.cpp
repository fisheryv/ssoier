/**
 * 将正整数m和n之间(包括m和n)能被17整除的数累加，其中，0<m<n<1000。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int m, n, sum = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (i % 17 == 0)
		{
			 sum += i;
		}
	}
	cout << sum;	
	return 0;
}