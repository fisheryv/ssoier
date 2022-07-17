/**
 * 请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
 */

#include <iostream>

using namespace std;

int count_two(int m)
{
   int count = 0;
   while (m > 0)
   {
      int num = m % 10;
      if (num == 2)
      {
         count++;
      }
      m /= 10;
   }
   return count;
}

int main()
{
   long l, r, count = 0;
   cin >> l >> r;
   for (int i = l; i <= r; i++)
   {
      count += count_two(i);
   }
   cout << count;
   return 0;
}