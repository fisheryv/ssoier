/**
 * 一个正整数，如果它能被7整除，或者它的十进制表示法中某一位上的数字为7，则称其为与7相关的数。
 * 现求所有小于等于n(n<100)与7无关的正整数的平方和。
 */
 #include <iostream>
 #include <cstdio>

using namespace std;

int main()
{
int n;
long count = 0;
cin >> n;
if (n <= 1 || n >= 10000)
{
    return -1;
}
for (int i = 1; i <= n; i++)
{
    int a = i % 10;
    int b = i / 10;
    if (a != 7 && b != 7 && i % 7 != 0)
    {
        s += i * i;
    }
}
cout << s;
return 0;
}