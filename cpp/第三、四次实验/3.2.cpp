#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)return false;
	if (num <= 3)return true;
	if (num % 2 || num % 3 == 0)return false;
	for (int i = 5; i < sqrt(num); i++)
	{
		if (num % i == 0)return false;
	}
	return true;

}
int main()
{
	int count = 0;
	int num = 2;
	while (count <= 200)
	{
		if (is_prime(num))
		{
			cout << num << " ";
			count++;
			if (count % 10 == 0)cout << endl;

		}
		num++;
	}

}