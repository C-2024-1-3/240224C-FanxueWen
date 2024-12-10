#include<iostream>
using namespace std;
int main()
{
	bool boolarray[100];
	for (int i = 0; i < 100; i++)
	{
		boolarray[i] = true;
	}
	for (int student = 1; student <= 100; student++)
	{
		for (int drawer = student; drawer <= 100; drawer += student + 1)
		{
			if (boolarray[drawer] == true)
			{
				boolarray[drawer] = false;
			}
			else
			{
				boolarray[drawer] = true;
			}

		}
	}
	for (int m = 0; m <= 100; m++)
	{
		if (boolarray[m] == true)
		{
			cout << m + 1 << " ";
		}
	}
	system("pause");
	return 0;
}