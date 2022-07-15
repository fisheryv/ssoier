/**
 * 两个整数a和b分别作为分子和分母，既分数a/b，求它的浮点数值(双精度浮点数，保留小数点后9位)。
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        return -1;
    }
    double c = a / double(b);
    printf("%.9lf", c);
    return 0;
}