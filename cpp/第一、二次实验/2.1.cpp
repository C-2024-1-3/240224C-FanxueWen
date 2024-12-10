#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入a的值" << endl;
	cin >> a;
	if (a >= 97 && a <= 122)
	{
		a -= 32;
		cout << "a为" << a << endl;
	}
	else if (a >= 65 && a <= 90)
	{
		cout << "a为" << int(a + 1) << endl;
	}
	else
	{
		cout << "不是字符类" << endl;
	}
}