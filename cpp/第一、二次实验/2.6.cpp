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
	cout << "�������һ������" << endl;
	cin >> num1;
	cout << "������ڶ�������" << endl;
	cin >> num2;
	cout << "���Լ��Ϊ��" << max(num1, num2) << endl;
	cout << "��С������Ϊ��" << min(num1, num2) << endl;
}