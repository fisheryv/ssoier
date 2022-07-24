/**
 * 哥德巴赫猜想的命题之一是:大于6的偶数等于两个素数之和。
 * 编程将6～100所有偶数表示成两个素数之和。
 */
 #include <cstdio>
 #include <cmath>

 bool isPrime(int n)
 {
     if(n == 2)
     {
         return true;
     }
     for (int i = 2; i <= ceil(sqrt(n)); i++)
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
     for(int i = 6; i<=100; i+=2)
     {
         for(int j = 3; j <= i/2; j++)
         {
             if(isPrime(j) && isPrime(i-j))
             {
                 printf("%d=%d+%d\n", i, j, i-j);
                 break;
             }
         }
     }
     return 0;
 }