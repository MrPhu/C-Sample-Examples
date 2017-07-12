#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void main()
{
	int a = 123;
	int b = 456;
	int c = 789;

	cout << a << " " << &a << endl;

	int *ptr = 0;
	ptr = &a;
	cout << *ptr << " " << ptr << endl;

	ptr = ptr + 2;

	cout << *ptr << " " << ptr << endl;
	cout << a << " " << &a << endl;

	system("pause");

}