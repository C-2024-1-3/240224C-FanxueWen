#include <iostream>
using namespace std;
int main()
{
	cout << "请输入三角形的三边：" << endl;
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a;
	cin >> b;
	cin >> c;
	int C = a + b + c;

	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "三角形周长为：" << C << endl;
		if (b == c != a || a == b != c || a == c != b)
		{
			cout << "为等腰三角形" << endl;
		}
		else
		{
			cout << "不是等腰三角形" << endl;
		}

	}
	else
	{
		cout << "不构成三角形" << endl;
	}
}