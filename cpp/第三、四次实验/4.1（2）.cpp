#include<iostream>
using namespace std;
double a[10];
int len = 10;

double swap(double* a, double* b)
{
	double d = *a;
	*a = *b;
	*b = d;
	return 0;
}
void bubble(double a[])
{
	bool charged = true;
	while (charged)
	{
		charged = false;
		for (int j = 0; j < len - 1; j++)
		{

			if (a[j] > a[j + 1])
			{

				swap(&a[j], &a[j + 1]);
				charged = true;
			}
		}
	}
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "请输入数字" << endl;
		cin >> a[i];
	}
	bubble(a);
	cout << "排序后的数组为：";
	for (int m = 0; m < 10; m++)
	{
		cout << a[m];
	}
}