/*Given the string "A string." */
/*Print on one line the letter on the index 0, the pointer position and the letter t.undate the pointer to pointer + 2. */
/*Then, in another line print the pointer and the letters r and g of the string(using the pointer).*/

#include <string>
#include <iostream>

using namespace std;

int main() {
	string aString;
	cout << "Input string: ";
	getline(cin, aString);

	cout << "The letter index 0: " << aString.substr(0, 1) <<endl;
	for (int i = 0; i < aString.length();i++){
		aString[i] = tolower(aString[i]);
	}
	int tIndex = aString.find('t',0);
	if (tIndex > 0) {	
		char *ptrTIndex = &aString[tIndex];
		cout << "Adress letter T: " << &ptrTIndex << " position T: " << *ptrTIndex << endl;
		ptrTIndex += 2;
		cout << "Pointer +2: " << "Address: " << &ptrTIndex << " position: " << *ptrTIndex << endl;
		//cout << aString;
	}
	else {
		cout << "No letter T in the string." <<endl;
	}


	system("pause");

	return 0;
}