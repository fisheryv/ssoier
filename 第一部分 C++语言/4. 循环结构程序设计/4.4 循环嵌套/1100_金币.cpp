/**
 * 国王将金币作为工资，发放给忠诚的骑士。
 * 第1天，骑士收到一枚金币；之后两天(第2天和第3天)里，每天收到两枚金币；
 * 之后三天(第4、5、6天)里，每天收到三枚金币；
 * 之后四天(第7、8、9、10天)里，每天收到四枚金币……这种工资发放模式会一直这样延续下去：
 * 当连续n天每天收到n枚金币后，骑士会在之后的连续n+1天里，每天收到n+1枚金币(n为任意正整数)。
 *
 * 你需要编写一个程序，确定从第一天开始的给定天数内，骑士一共获得了多少金币。
 */
#include <iostream>

using namespace std;

int main()
{
    int n, count = 1, coin = 1, d = 0;
    long sum = 0 ;
    cin >> n;
    if (n < 1 || n > 10000)
    {
        return -1;
    }
    while (count <= n)
    {
        sum += coin;
        count++;
        d++;
        if (d == coin)
        {
            coin++;
            d = 0;
        }
    }
    cout << sum;
    return 0;
}