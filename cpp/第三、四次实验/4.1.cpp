#include<iostream>
using namespace std;
int main()
{
	int numbers[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}
	for (int i = 0; i < 10; i++)
	{
		bool isdistinct = true;
		for (int j = 0; j < i; j++)
		{
			if (numbers[i] == numbers[j])
			{
				isdistinct = false;
				break;
			}
		}


		if (isdistinct)
		{
			cout << numbers[i] << "";
		}
	}
	cout << endl;
	return 0;
}