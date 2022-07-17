/**
 * 给定一个十进制正整数n(1≤n≤10000)，写下从1到n的所有整数，
 * 然后数一下其中出现的数字“1”的个数。
 */
#include <iostream>

using namespace std;

int count_one(int m)
{
   int count = 0;
   while (m > 0)
   {
      int num = m % 10;
      if (num == 1)
      {
         count++;
      }
      m /= 10;
   }
   return count;
}

int main()
{
   int n;
   long count = 0;
   cin >> n;
   if (n < 1 || n > 10000)
   {
      return -1;
   }
   for (int i = 1; i <= n; i++)
   {
      count += count_one(i);
   }
   cout << count;
   return 0;
}