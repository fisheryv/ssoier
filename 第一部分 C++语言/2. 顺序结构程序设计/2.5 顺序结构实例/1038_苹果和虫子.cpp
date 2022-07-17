/**
 * 你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，
 * 假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
 */
#include <cstdio>
#include <cmath>

int main()
{
	unsigned int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	unsigned int eaten = ceil(double(y) / x);
    unsigned int rem;
	if (eaten > n)
	{
		rem = 0;
	}
	else
	{
		rem = n - eaten;	
	}
    printf("%d", rem);
	return 0;
}