/**
 * 给定一个整数N，判断其正负。
 * 如果N>0，输出positive；
 * 如果N=0，输出zero；
 * 如果N<0，输出negative。
 */
#include <iostream>

using namespace std;

int main()
{
	long a;
	cin >> a;
	if (a > 0)
	{
		cout << "positive";
	}
	else if (a < 0)
	{
		cout << "negative";
	}
	else
	{
		cout << "zero";
    }
	return 0;
}