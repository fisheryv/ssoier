/**
 * 晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，
 * 请帮晶晶判断她能否接受贝贝的邀请，如果能输出YES；如果不能则输出NO。
 * 注意YES和NO都是大写字母！
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int w;
	cin >> w;
	switch(w)
	{
		case 1:
		case 3:
		case 5: 
            cout << "NO";
            break;
		default: 
            cout << "YES";
	}
	return 0;
}