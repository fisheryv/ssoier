/**
 * 一个正整数，如果它能被7整除，或者它的十进制表示法中某一位上的数字为7，则称其为与7相关的数。
 * 现求所有小于等于n(n<100)与7无关的正整数的平方和。
 */
 #include <iostream>
 #include <cstdio>

using namespace std;

bool aboutSeven(int n)
{
    if (n % 7 == 0)
    {
        return true;
    }
    while (n > 0)
    {
        int a = n % 10;
        if (a == 7)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main()
{
    int n;
    long s = 0;
    cin >> n;
    if (n <= 1 || n >= 100)
    {
        return -1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!aboutSeven(i))
        {
            s += i * i;
        }
    }
    cout << s;
    return 0;
}