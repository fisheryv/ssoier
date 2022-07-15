/** 
 * 分数a/b化为小数后，小数点后第n位的数字是多少？
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int s, r;
    for(int i = 0; i <= n; i++)
    {
        if (a == 0)
        {
            cout << 0;
            return 0;
        }
        s = a / b;
        r = a % b;
        a = r * 10;
    }
    cout << s;
    return 0;
}