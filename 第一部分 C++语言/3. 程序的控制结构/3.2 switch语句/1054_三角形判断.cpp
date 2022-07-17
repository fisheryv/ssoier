/**
 * 给定三个正整数，分别表示三条线段的长度，判断这三条线段能否构成一个三角形。
 * 如果能构成三角形，则输出“yes”，否则输出“no”。
 */
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
		cout << "yes";
	else
		cout << "no";
	return 0;
}