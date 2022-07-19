/**
 * 给定一个整数，请将该数各个位上数字反转得到一个新数。
 * 新数也应满足整数的常见形式，即除非给定的原数为零，
 * 否则反转后得到的新数的最高位数字不应为零，
 * 例如输入−380，反转后得到的新数为−83。
 */
#include <iostream>

using namespace std;

int main()
{
    long long n, num, s = 0;
    cin >> n;
    num = abs(n);
    if (n < 0)
    {
        cout << "-";
    }
    while (num > 0)
    {
        n = num % 10;
        s = 10 * s + n;
        num /= 10;
    }
    cout << s;
    return 0;
}