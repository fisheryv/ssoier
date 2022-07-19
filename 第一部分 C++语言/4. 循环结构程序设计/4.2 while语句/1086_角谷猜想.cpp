/**
 * 角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，
 * 得到的结果再按照上述规则重复处理，最终总能够得到1。
 */
#include <cstdio>

int main()
{
    long n;
    scanf("%ld", &n);
    while (n != 1)
    {
     if (n % 2 == 1)
     {
         printf("%ld*3+1=%ld\n", n, n * 3 + 1);
         n = n * 3 + 1;
     }  
     else
     {
         printf("%ld/2=%ld\n", n, n / 2);
         n /= 2;
     }
    }
    printf("End");
}