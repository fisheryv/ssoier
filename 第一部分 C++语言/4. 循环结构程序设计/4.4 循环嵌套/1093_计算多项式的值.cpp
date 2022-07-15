/**
 * 假定多项式的形式为x^n + x^(n−1) + … + x^2 + x + 1，
 * 请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double s = 1.0;
    long n;
    double x;
    cin >> x >> n;
    if (n < 1 || n > 1000000)
    {
        return -1;
    }
    double y = 1.0;
    for (int i = 1; i <= n; i++)
    {
        y *= x;
        s += y;
    }
    printf("%.2lf", s);
    return 0;
}