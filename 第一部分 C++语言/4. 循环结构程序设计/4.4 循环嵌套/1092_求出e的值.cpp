/**
 * 利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!，求e的值，要求保留小数点后10位。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    long long t = 1;
    double e = 1.0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t *= i;
        e += 1.0 / t;
    }
    printf("%.10lf", e);
    return 0;
}