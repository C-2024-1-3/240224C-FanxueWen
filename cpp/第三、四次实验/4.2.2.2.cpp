#include<iostream>
#include<cctype>
using namespace std;
int parseHex(const char* const hexString)
{
	const char* p = hexString;
	int result = 0;
	while (*p)
	{

		int value = *p;
		if (isdigit(value))
		{
			value = value - '0';
		}
		else if (isxdigit(value))
		{
			if (value >= 'A' && value <= 'F')
			{
				value
					= value - 'A' + 10;
			}
			else if (value >= 'a' && value <= 'f')
			{
				value = value - 'a' + 10;
			}
		}
		else
		{
			return 0;
		}
		result = result * 16 + value;
		p++;
	}
	return result;
}
int main()
{

	int a = parseHex("A5");
	cout << "A5的十进制表示方式为：" << a << endl;
}