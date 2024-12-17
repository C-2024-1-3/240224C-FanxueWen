// 第三次实验.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		cin >> hour;      //输入设定的时间 
		cin >> minute;
		cin >>sec;
	}
	void showtime()
	{
		cout << hour << ":"<<minute <<":" << sec << endl;
	}
};
int main()
{
	Time t1;        //定义t1为Time类对象
	t1.settime();
	t1.showtime();
	system("pause");
	return 0;

}
