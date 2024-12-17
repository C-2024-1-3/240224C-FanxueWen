// 5.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Student
{
public:
	int score;
	int num;
public:
	Student(int a, int b)
	{
		score = a;
		num = b;
	}
	int getscore()
	{
		return score;
	}
	int getnum()
	{
		return num;
	}
};
void max(Student* p,int size)
{
	int maxscore = p[0].getscore();
	int maxid = p[0].getnum();
	for (int i = 0; i <size; i++)
	{
		if (p[i].getscore() > maxscore)
		{
			maxscore = p[i].getscore();
			maxid = p[i].getnum();

		}
	}
	
	cout << maxid << endl;

}
int main()
{
	Student student[5] =
	{
		Student(22,1),
		Student(44, 2),
		 Student(24, 3),
		  Student(54, 4),

		   Student(46, 5),

	};
	max(student, 5);
	system("pause");
	return 0;

}

