/**
 * 用递归的方法求1+2+3+……+N的值。
 */
#include <iostream>

using namespace std;

int sumup(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sumup(n-1) + n;
}

int main()
{
    int n;
    cin >> n;
    int result = sumup(n);
    cout << result <<endl;
    return 0;
}