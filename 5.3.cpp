// 3.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class math
{
public:
	int height;
	int length;
	int width;
	int value;
public:
	void set()
	{
		cout << "请输入高：" << endl;
		cin >> height;
		cout << "请输入长：" << endl;
		cin >> length;
		cout << "请输入宽：" << endl;
		cin >> width;
	}
	int caculate()
	{
		value = height * length * width;
		cout << "长方柱的体积为：" << value << endl;;
		return 0;
	}
};
int main()
{
	math p1;
	math p2;
	math p3;
	p1.set();
	p2.set(); 
	p3.set();
	p1.caculate();
	p2.caculate();
	p3.caculate();
	system("pause");
	return 0;
	
}

