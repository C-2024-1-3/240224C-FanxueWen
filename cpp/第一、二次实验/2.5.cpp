#include<iostream>
using namespace std;
int main()
{

	int letter = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	char c;
	cout << "�������ַ���" << endl;
	while ((c = getchar()) != '/n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			letter++;
		}
		else if (c == ' ') {
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			digit++;
		}
		else
		{
			other++;
		}

	}
	cout << "Ӣ����ĸ����" << letter << endl;
	cout << "�ո����" << space << endl;
	cout << "�����ַ�������" << digit << endl;
	cout << "�����ַ�������" << other << endl;
}