#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void setpoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "坐标是：(" << x << "," << y << ")" << endl;
	}

};
int main()
{
	Point p(60, 80);
	p.setpoint(23, 45);
	p.display();
	system("pause");
	return 0;
}

