/**
 * 根据邮件的重量和用户是否选择加急计算邮费。计算规则：
 * 重量在1000克以内(包括1000克), 基本费8元。
 * 超过1000克的部分，每500克加收超重费4元，不足500克部分按500克计算；
 * 如果用户选择加急，多收5元。
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int w, f;
	char j;
	cin >> w >> j;
	
	if (w <= 1000) 
	{
		f = 8;
	}
	else if (w > 1000)
	{
		f = ceil((w - 1000) / 500.0) * 4 + 8;
	}
	if (j == 'y')
	{
		f += 5;
	}
	cout << f;
	return 0;
}