/**
 * 已知正整数n是两个不同的质数的乘积，试求出较大的那个质数。
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long n;
    cin >> n;
    if (n < 6 || n > 2000000000)
    {
        return -1;
    }
    if (n % 2 == 0)
    {
        cout << n / 2;
        return 0;
    }
    for (int i = 3; i <= ceil(sqrt(n)); i += 2)
    {
        if (n % i == 0)
        {
            cout << n / i;
        }
    }
    return 0;
}