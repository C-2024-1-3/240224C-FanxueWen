#include<iostream>
using namespace std;
int main()
{
double num1;
double num2;
double result;
char operation;
cout << "请输入num1:" << endl;
cin >> num1;
cout << "请输入num2:" << endl;
cin >> num2;
cout << "请输入运算符：" << endl;
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
cout << "计算结果为：" << result << endl;
}
