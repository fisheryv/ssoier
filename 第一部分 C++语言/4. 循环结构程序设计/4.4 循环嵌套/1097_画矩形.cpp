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
    if (h < 3 || h > 10 || w < 5 || w > 10)
    {
        return -1;
    }
    if (empty == 1)
    {
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
            cout << c;
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= w; i++)
        {
            cout << c;
        }
        cout << endl;
        for (int j = 1; j <= h - 2; j++)
        {
            cout << c;
            for (int a = 1; a <= w - 2; a++)
            {
                cout << " ";
            }
            cout << c << endl;
        }
        for (int b = 1; b <= w; b++)
        {
            cout << c;
        }
    }
    
    return 0;
}