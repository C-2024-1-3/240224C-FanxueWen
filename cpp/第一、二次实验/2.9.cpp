#include<iostream>
using namespace std;
int origin = 2;
int sum = origin;
int main()
{
	int apple = origin;
	int max = 100;
	int b = 0;
	double cost = 0;
	double costdaily = 0;
	int day = 1;
	do
	{

		apple = apple * 2;
		sum = sum + apple;
		cost = 0.8 * sum;
		day++;
		costdaily = cost / day;
	} while (apple <= max / 2);
	cout << costdaily << endl;
	return 0;
}