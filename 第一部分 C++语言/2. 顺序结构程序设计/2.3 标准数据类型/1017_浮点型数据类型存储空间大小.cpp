/**
 * 分别定义float，double类型的变量各一个，并依次输出它们的存储空间大小(单位：字节)。
 */
#include <iostream>

using namespace std;

int main()
{
	float a;
	double b;
	cout << sizeof(b) << " " << sizeof(a);
	return 0;
}
