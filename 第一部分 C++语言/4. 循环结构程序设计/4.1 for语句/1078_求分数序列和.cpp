/**
 * 有一个分数序列 q1/p1，q2/p2，q3/p3，q4/p4，q5/p5，.... ,
 * 其中qi+1=qi+pi， pi+1=qi，p1=1，q1=2。比如这个序列前6项分别是
 * 2/1,3/2,5/3,8/5,13/8,21/13。求这个分数序列的前n项之和。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, q = 2, p = 1, a;
	double sum = 2.0;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		a = q;
		q = q + p;
		p = a;
		sum += q * 1.0 / p;
	}
	printf("%.4lf", sum);
	return 0;
}