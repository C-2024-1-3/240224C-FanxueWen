#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "������a��ֵ" << endl;
	cin >> a;
	if (a >= 97 && a <= 122)
	{
		a -= 32;
		cout << "aΪ" << a << endl;
	}
	else if (a >= 65 && a <= 90)
	{
		cout << "aΪ" << int(a + 1) << endl;
	}
	else
	{
		cout << "�����ַ���" << endl;
	}
}