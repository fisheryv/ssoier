/**
 * 给定被除数和除数，求整数商及余数。
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        return -1;
    }
    int c = a / b;
    int r = a % b;
    cout << c << " " << r;
    return 0;
}