/**
 * 编写程序，计算下列分段函数y=f(x)的值。结果保留到小数点后三位。
 * y=−x+2.5             0≤x<5
 * y=2−1.5(x−3)(x−3)    5≤x<10
 * y=x/2−1.5            10≤x<20
 */
#include <cstdio>

int main()
{
	double x, y;
	scanf("%lf", &x);
	
	if (0 <= x && x < 5) 
	{
	    y = -x + 2.5;
	}
	else if (5 <= x && x < 10)
	{
	    y = 2 - 1.5 * (x - 3) * (x - 3);
	}
	else if (10 <= x && x < 20)
	{
	    y = x / 2.0 - 1.5;
	}
    else
    {
        return -1;
    }
	printf("%.3lf", y);
	return 0;
}