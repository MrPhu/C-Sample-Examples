/*write a class having two private variables and one member function which will return the area f the rectangle*/
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class rectangle {
private:
	int length;
	int width;
public:
	void setValue(int le, int wi){
		length = le;
		width = wi;
	}
	int getValue() {
		return (length * width);
	}
};
int main() {
	int le, wi;
	cout << "Set value for length: ";
	cin >> le;
	cout << "\nSet value for width: ";
	cin >> wi;
	
	rectangle rec1;
	rec1.setValue(le, wi);
	cout << "\nArea: " << rec1.getValue();
	system("pause");
	return 0;

}