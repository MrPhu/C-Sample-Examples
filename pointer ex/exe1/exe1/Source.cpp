/*Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively.*/
/*There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.*/

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void main() {
	int a, b;
	cout << "Input 2 integer: " << endl;
	cin >> a;
	cin >> b;
	int *ptrA, *ptrB;
	ptrA = &a;
	ptrB = &b;

	cout << "Assigned value a and b: " << *ptrA << " " << *ptrB;
	system("pause");

}