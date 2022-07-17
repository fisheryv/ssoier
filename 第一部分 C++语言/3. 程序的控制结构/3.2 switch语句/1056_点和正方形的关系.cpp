/**
 * 有一个正方形，四个角的坐标（x,y)分别是(1，-1)，(1，1)，(-1，-1)，(-1，1)，x是横轴，y是纵轴。
 * 写一个程序，判断一个给定的点是否在这个正方形内(包括正方形边界)。
 * 如果点在正方形内，则输出yes，否则输出no。
 */
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))
		cout << "yes";
	else
		cout << "no";
	return 0;
}