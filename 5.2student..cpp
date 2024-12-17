// 5.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//student.cpp
#include <iostream>
using namespace std;
#include"student.h"          //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout <<"sex:" << sex << endl;
}


