/**
 * 监护室每小时测量一次病人的血压，
 * 若收缩压在90-140之间并且舒张压在60-90之间(包含端点值)则称之为正常，
 * 现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。
 */
#include <iostream>

using namespace std;

int main()
{
	int n, num = 1, sum = 0, s, z;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> z;
		if ((s >= 90 && s <= 140) && (z >= 60 && z <= 90))
		{
			sum += 1;
		}
		else
		{
			sum = 0;
		}
		if (sum > num)
		{
			num = sum;
		}
	}
	cout << num;
	return 0;
}