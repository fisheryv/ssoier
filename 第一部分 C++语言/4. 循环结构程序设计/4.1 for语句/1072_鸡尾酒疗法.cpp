/**
 * 鸡尾酒疗法，指“高效抗逆转录病毒治疗”。人们在鸡尾酒疗法的基础上又提出了很多种改进的疗法。
 * 为了验证这些治疗方法是否在疗效上比鸡尾酒疗法更好，可用通过临床对照实验的方式进行。
 * 假设鸡尾酒疗法的有效率为x，新疗法的有效率为y，如果y-x大于5%，则效果更好，
 * 如果x-y大于5%，则效果更差，否则称为效果差不多。
 * 下面给出n组临床对照实验，其中第一组采用鸡尾酒疗法，其他n-1组为各种不同的改进疗法。
 * 请写程序判定各种改进疗法效果如何。
 */
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
    double aj, bj;
	cin >> aj >> bj;
	double avalible_rate_j = bj / aj;
	for (int i = 1; i < n; i++)
	{
		int an, bn;
		cin >> an >> bn;
		double avalible_rate_n = bn / an;
		if (avalible_rate_n - avalible_rate_j > 0.05)
		{
			cout << "better" << endl;
		}
		else if (avalible_rate_j - avalible_rate_n > 0.05)
		{
			cout << "worse" << endl;
		}
		else
		{
			cout << "same" << endl;
		}
	}
	return 0;
}