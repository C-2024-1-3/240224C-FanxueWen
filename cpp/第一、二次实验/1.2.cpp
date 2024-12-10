#include <iostream>
#define a 3.1415;
using namespace std;
int main()
{
	double π = a;
	double V;
	int r = 0, h = 0;
	cout << "r的长度为" << endl;
	cout << "h的长度为：" << endl;
	cin >> r;
	cin >> h;

	V = π * r * r * h / 3;
	cout << "圆柱体体积为：" << V << endl;
}
