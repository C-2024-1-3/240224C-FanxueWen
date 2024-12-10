#include <iostream>
using namespace std;
int max(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return max(b, a % b);
	}
}

int min(int c, int d)
{
	return c * d / max(c, d);
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	cout << "请输入第一个数：" << endl;
	cin >> num1;
	cout << "请输入第二个数：" << endl;
	cin >> num2;
	cout << "最大公约数为：" << max(num1, num2) << endl;
	cout << "最小公倍数为：" << min(num1, num2) << endl;
}