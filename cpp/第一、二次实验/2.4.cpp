#include<iostream>
using namespace std;
int main()
{
double num1;
double num2;
double result;
char operation;
cout << "������num1:" << endl;
cin >> num1;
cout << "������num2:" << endl;
cin >> num2;
cout << "�������������" << endl;
cin >> operation;
switch (operation)
{
case '+':
	result = num1 + num2;
case'-':
	result = num1 - num2;
case'*':
	result = num1 * num2;
case'/':
	result = num1 / num2;
case'%':
	result = (int)num1 % (int)num2;


}
cout << "������Ϊ��" << result << endl;
}
