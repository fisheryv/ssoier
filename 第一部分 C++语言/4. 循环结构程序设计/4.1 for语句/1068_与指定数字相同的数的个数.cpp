/**
 * 输出一个整数序列中与指定数字相同的数的个数。
 * 输入包含2行：第1行为N和m，表示整数序列的长度(N<=100)和指定的数字；
 * 第2行为N个整数，整数之间以一个空格分开。
 * 输出为N个数中与m相同的数的个数。
 */
#include <iostream>

using namespace std;

int main()
{
	int m, num, n;
	int count = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num == m)
		{
			count++;  
		}
	}
	cout << count;
	return 0;
}