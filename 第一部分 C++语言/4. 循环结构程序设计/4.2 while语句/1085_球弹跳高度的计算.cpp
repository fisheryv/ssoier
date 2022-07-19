/**
 * 一球从某一高度h落下(单位米)，每次落地后反跳回原来高度的一半，再落下。
 * 编程计算气球在第10次落地时，共经过多少米? 第10次反弹多高？
 */
#include <iostream>

using namespace std;

int main()
{
    double h, s;
    cin >> h;
    for (int i = 0; i < 10; i++)
    {
        s += h;
        h /= 2.0;
        s += h;
    }
    cout << s - h << endl;
    cout << h;
}