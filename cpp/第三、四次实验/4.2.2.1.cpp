#include <iostream>
#include<string>
using namespace std;
int indexof(const char* S1, const char* S2)
{
	int lenth1 = 0, lenth2 = 0;
	const char* temp1 = S1;
	const char* temp2 = S2;
	while (*(temp1 + lenth1) != '\0')lenth1++;
	while (*(temp2 + lenth2) != '\0')lenth2++;
	if (lenth1 > lenth2)
		return -1;
	for (int i = 0; i < lenth2 - lenth1; i++)
	{
		const char* p1 = S1;
		const char* p2 = S2 + i;
		int j;
		for (j = 0; j < lenth1; j++)
		{
			if (*p1 != *p2)
				break;
			p1++;
			p2++;
		}
		if (j == lenth1)
			return i;
	}
	return -1;
}
int main()
{
	const int longg = 1000;
	char s1[longg];
	char s2[longg];

	cout << "请输入字符串s1" << endl;
	cin.getline(s1, longg);
	cout << "请输入字符串s2" << endl;
	cin.getline(s2, longg);
	int result = indexof(s1, s2);
	if (result != -1)
		cout << "s1是s2的子串，第一次匹配的下表为：" << result << endl;
	else
		cout << "s1不是s2的子串" << endl;

}