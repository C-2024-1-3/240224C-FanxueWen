//student.h  
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	
	
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
