/** 
 * 给定一个整数n(1≤n≤100000000)，要求从个位开始分离出它的每一位数字。
 * 从个位开始按照从低位到高位的顺序依次输出每一位数字。
 */
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    while (n > 0)
    {
        cout << n % 10 << " ";
        n /= 10;
    }
}