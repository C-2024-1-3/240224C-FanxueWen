#include<iostream>
using namespace std;
int main()
{

double a = 0;
cin >> a;
if (a < 0)
{
	cout << "您输入的是负数" << endl;
}
else
{

	int m = 1;
	double xn = a;
	while (m > 0.00001 || m < -0.00001)

	{
		double xn1 = 0.5 * (xn + a / xn);
		m = xn1 - xn;
		xn = xn1;
	}

	cout << xn << endl;
}
return 0;
}
