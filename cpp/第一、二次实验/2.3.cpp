#include <iostream>
using namespace std;
int main()
{
	cout << "�����������ε����ߣ�" << endl;
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a;
	cin >> b;
	cin >> c;
	int C = a + b + c;

	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�������ܳ�Ϊ��" << C << endl;
		if (b == c != a || a == b != c || a == c != b)
		{
			cout << "Ϊ����������" << endl;
		}
		else
		{
			cout << "���ǵ���������" << endl;
		}

	}
	else
	{
		cout << "������������" << endl;
	}
}