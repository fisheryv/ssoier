/**
 * 给定正整数n，求不大于n的正整数的阶乘的和（即求1!+2!+3!+...+n!），输出阶乘的和。
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    long long s = 0, t = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t *= i;
        s += t;
    }
    cout << s;
    return 0;
}