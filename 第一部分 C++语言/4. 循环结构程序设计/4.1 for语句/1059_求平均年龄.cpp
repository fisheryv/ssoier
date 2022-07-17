/**
 * 班上有学生若干名，给出每名学生的年龄（整数），
 * 求班上所有学生的平均年龄，保留到小数点后两位。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	unsigned int n, a;
    double sum = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
	}
	double avg = sum / n;
	printf("%.2lf", avg);
	return 0;
}