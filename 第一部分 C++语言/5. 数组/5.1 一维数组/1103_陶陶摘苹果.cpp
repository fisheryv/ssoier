/**
 * 陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。
 * 苹果成熟的时候，陶陶就会跑去摘苹果。
 * 陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
 * 现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，
 * 请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。
 */
#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] < 100 || a[i] > 200)
        {
            continue;
        }
    }
    int height;
    cin >> height;
    height += 30;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if(a[i] <= height)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}