#include<iostream>
using namespace std;
int main()
{

	int letter = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	char c;
	cout << "请输入字符：" << endl;
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
	cout << "英文字母个数" << letter << endl;
	cout << "空格个数" << space << endl;
	cout << "数字字符个数：" << digit << endl;
	cout << "其他字符个数：" << other << endl;
}