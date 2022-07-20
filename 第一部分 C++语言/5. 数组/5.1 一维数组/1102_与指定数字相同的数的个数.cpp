/** 
 * 输出一个整数序列中与指定数字相同的数的个数。
 */
#include <iostream>

using namespace std;

int a[100];
int main()
{
    int n, m, count = 0;
    cin >> n;
    if (n < 1 || n > 100)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            count++;
        }
    }
    cout << count;
}