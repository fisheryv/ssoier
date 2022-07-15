/**
 * 读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们，
 * 按照格式要求依次输出三个整数，之间以一个空格分开。
 */
#include <cstdio>

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%8d %8d %8d", n1, n2, n3);
    return 0;
}