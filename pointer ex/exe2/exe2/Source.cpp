/*Write a C++ program to find the max of an integral data set.*/
/*The program will ask the user to input the number of data values in the set and each value.*/
/*The program prints on screen a pointer that points to the max value.*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void main() {
	int n = 0, max = 0;
	cout << "How many values in your set: ";
	cin >> n;

	int array[200] = {};

	for (int i = 0;i<n ; i=i+1)
	{
		cout << "Input value " << i+1 << ": ";
		cin >> array[i];
		if (max < array[i])
			max = array[i];
	}
	int *ptr = &max;

	cout << "address max:" << ptr << " " << "value: " << *ptr <<endl;
	system("pause");

}