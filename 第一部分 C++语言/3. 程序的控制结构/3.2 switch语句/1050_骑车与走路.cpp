/**
 * 在清华校园里，没有自行车，上课办事会很不方便。
 * 但实际上。并非去办任何事情都是骑车快,因为骑车总要找车、开锁、停车、锁车等,这要耽误一些时间。
 * 假设找到自行车，开锁并骑上自行车的时间为27秒；停车锁车的时间为23秒；
 * 步行每秒行走1.2米，骑车每秒行走3.0米。请判断走不同的距离去办事,是骑车快还是走路快。
 * 如果骑车快，输出一行"Bike"；如果走路快，输出一行"Walk"；如果一样快，输出一行"All"。
 */
#include <iostream>

using namespace std;

int main()
{
	unsigned int m;
	cin >> m;
	double b = 27 + 23 + m / 3.0;
	double w = m / 1.2;
	if (b < w) 
        cout << "Bike";
	else if (b > w) 
        cout << "Walk";
	else 
        cout << "All";
	return 0;
}