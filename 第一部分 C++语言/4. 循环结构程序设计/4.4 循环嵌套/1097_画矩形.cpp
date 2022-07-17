/**
 * 根据参数，画出矩形。输入四个参数：前两个参数为整数，
 * 依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）；
 * 第三个参数是一个字符，表示用来画图的矩形符号；
 * 第四个参数为1或0，0代表空心，1代表实心。
 */

#include <iostream>

using namespace std;

int main() 
{
    int h, w;
    char c;
    int empty;
    cin >> h >> w >> c >> empty;
    if (h<3 || h>10 || w<5 || w>10)
    {
        return -1;
    }
    
    return 0;
}