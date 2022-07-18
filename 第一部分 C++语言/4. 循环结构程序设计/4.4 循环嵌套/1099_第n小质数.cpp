/**
 * 输入一个正整数n，求第n小的质数。
 */
#include <iostream>
#include <cmath>

using namespace std;
bool is_prime(int n)
{
    for (int i = 2; i < ceil(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, count = 1, num = 2;
    cin >> n;
    if (n > 10000)
    {
        return -1;
    }
    while (count < n)
    {
        if (is_prime(num))
        {
            count++;
        }
        n++;
    } 
    cout << num;
    return 0;
}