#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cout << "������Ԫ�ظ���Ϊ��" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "������Ԫ�أ�" << endl;
		cin >> arr[i];
	}
	for (int m = 0; m < n; m++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;

			}
		}
	}
	cout << "����������Ϊ��" << endl;
	for (int q = 0; q < n; q++)
	{
		cout << arr[q];
	}
	delete arr;
	return 0;
}