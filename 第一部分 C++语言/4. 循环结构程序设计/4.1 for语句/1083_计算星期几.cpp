/**
 * 假设今天是星期日，那么过a^b天之后是星期几？
 */
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int r = 1;
	for (; b; b >>= 1, a = a * a % 7)
	{
		if (b & 1)
		{
			r = r * a % 7;
		}
	}
	switch(r)
	{
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thurday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 0:
			cout << "Sunday";
			break;
		}
	return 0;
}