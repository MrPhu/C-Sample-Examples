/* Write a progra and input 2 integers in main and pass them to default constructor of the class. */
/* Show the result of the addition of 2 numbers*/

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class constructor {
protected:
	int a;
	int b;
public:
	constructor(int c, int d) : a(c), b(d) {};
	int getAddition(){
		return (a + b);
	}
};
int main() {
	int a, b;
	cout << "input values: \n";
	cin >> a;
	cin >> b;
	constructor cons1(a, b);
	cout << "Addition: " << cons1.getAddition() << "\n";
	system("pause");
	return(0);
}
