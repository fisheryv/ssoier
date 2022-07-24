/**
 * 已知：Sn=1＋1/2＋1/3＋…＋1/n。显然对于任意一个整数k，当n足够大的时候，Sn大于k。
 * 现给出一个整数k（1<=k<=15），要求计算出一个最小的n，使得Sn＞k。
 */
#include <iostream>

using namespace std;

int main()
{
    int k, n = 1;
    double sn;
    cin >> k;
    while (sn <= k)
    {
        sn += 1.0 / n;
        n++;
    }
    cout << n - 1;
    return 0;
}