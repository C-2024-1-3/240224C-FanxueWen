//student.h  
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	
	
	void set_value(int value,const char* a, char b)
	{
		num = value;
		for (int i = 0; i < 3 && a[i] != '\0'; i++)
		{
			name[i] = a[i];
		}
		name[4] = '\0';
		sex = b;
	}
	void display();
private:
	int num;
	char name[20];
	char sex;

};
