/**
 * 将一个三位数反向输出，例如输入358，反向输出853。
 */
#include <cstdio>

int main()
{
	int r;
	scanf("%d", &r);
	int a = r / 100;
	int b = (r / 10) % 10;
	int c = r % 10;
	printf("%d%d%d", c, b, a);
	return 0;
}