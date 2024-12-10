#include <iostream>
using namespace std;
int max(int x, int y)
{
	if (x > y)
	{
		int c = 0;
		while (x % y != 0)
		{
			c = x % y;
			x = y;
			y = c;
		}

	}
	if (x < y)
	{
		int c = 0;
		while (x % y != 0)
		{
			c = x % y;
			x = y;
			y = c;
		}

	}

	return y;
}
int min(int y, int z)
{
	int l = 0;
	l = y * z / max(y, z);
	return l;
}
int main()
{
	int m = 0, n = 0;
	cout << "m=" << endl;
	cout << "n=" << endl;
	cin >> m;
	cin >> n;
	int a = 0, b = 0;
	a = max(m, n);
	b = min(m, n);
	cout << "最大公因数为：" << a << endl;
	cout << "最小公倍数为：" << b << endl;

}