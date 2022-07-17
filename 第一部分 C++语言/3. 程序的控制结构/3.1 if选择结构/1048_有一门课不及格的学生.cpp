/**
 * 给出一名学生的语文和数学成绩，判断他是否恰好有一门课不及格(成绩小于60分)。
 * 若该生恰好有一门课不及格，输出1；否则输出0。
 */
#include <iostream>

using namespace std;

int main()
{
	int c, m;
	cin >> c >> m;
	if ((c >= 60 && m < 60 ) || (c < 60 && m >= 60))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}