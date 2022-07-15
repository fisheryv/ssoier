/**
 * 输入两个正整数m和k，其中1<m<100000，1<k<5，
 * 判断m能否被19整除，且恰好含有k个3，如果满足条件，则输出YES，否则，输出NO。
 */
#include <iostream>

using namespace std;

int main()
{
    long m, num;
    int k, count = 0;
    cin >> m >> k;
    if (m <= 1 || m >= 100000)
    {
        return -1;
    }
    if (k <= 1 || k >=5)
    {
        return -1;
    }
    if (m % 19 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (m > 0)
    {
        num = m % 10;
        if (num == 3)
        {
            count++;
        }
        m /= 10;
    }
    if (count == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}