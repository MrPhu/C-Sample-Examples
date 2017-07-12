/*perform a program that input two parts including the real and the imaginary of two real numbers, output the sum of them */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdlib.h>
using namespace std;

class createRealNumber {
protected:
	double real;
	double imaginary;
public:
	void setFloatNumber(double a, double b) {
		real = a;
		imaginary = b;
	}
	double getFloatNumber() {
		std::stringstream setFloat;
		setFloat << real << "." << imaginary;
		string result = setFloat.str();
		return ::atof(result.c_str());
	}
};
double getSum(double a, double b) {
	return (a + b);
}

class seperateRealNumber {
private:
	string real;
	string imaginary;
public:
	seperateRealNumber(double Num) {
		std::stringstream Number;
		Number << Num;
		string NumString = Number.str();
		
		int positionOfDot = NumString.find(".");
		real = NumString.substr(0,positionOfDot);
		imaginary = NumString.substr(positionOfDot + 1);
	}
	string getReal() {
		return real;
	}
	string getImaginary() {
		return imaginary;
	}
};
void main() {
	double a, b;
	cout << "Set 1st real: ";
	cin >> a;
	cout << "Set 1st imaginary: ";
	cin >> b;
	createRealNumber Num1;
	Num1.setFloatNumber(a, b);
	cout << "Set 2nd real: ";
	cin >> a;
	cout << "Set 2nd imaginary: ";
	cin >> b;
	createRealNumber Num2;
	Num2.setFloatNumber(a, b);
	cout << "\n2 real numbers are: " << Num1.getFloatNumber() << " and " << Num2.getFloatNumber() << endl;
	seperateRealNumber SumNumber(Num1.getFloatNumber() + Num2.getFloatNumber());
	cout << "2 parts of the result: " << SumNumber.getReal() << " and " << SumNumber.getImaginary() << endl;
	system("pause");
}