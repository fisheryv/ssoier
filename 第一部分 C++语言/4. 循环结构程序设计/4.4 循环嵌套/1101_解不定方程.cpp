/**
 * 给定正整数a，b，c。求不定方程 ax+by=c关于未知数x和y的所有非负整数解组数。
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, count = 0;
    cin >> a >> b >> c;
    if (a < 1 || b < 1 || c < 1)
    {
        return -1;
    }
    for (int i = 0; i <= c / a; i++)
    {
        for (int j = 0; j <= c / b; j++)
        {
            if (a * i + b * j == c)
            {
                count++;
            }
        }
    }
    cout << count;
}