﻿// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
using namespace std;

void printMessage(void)
{
	cout << "this is a demo" << endl;
}

int main()
{
	cout << "hello world" << endl;
	double a = 123.456, b = 3.14159, c = 3214.67;
	cout << setiosflags(ios::fixed) << setiosflags(ios::right) << setprecision(2);
	cout << setw(10) << a << endl;
	cout << setw(10) << b << endl;
	cout << setw(10) << c << endl;

	char d;
	d = getchar(); putchar(d + 32); putchar('\n');

	long f1, f2;
	int i;
	f1 = f2 = 1;
	for (i = 1; i <= 20; i++)
	{
		cout << setw(12) << f1 << setw(12) << f2;
		if (i % 2 == 0)
			cout << endl;
		f1 = f1 + f2;
		f2 = f2 + f1;
	}
    return 0;
}

