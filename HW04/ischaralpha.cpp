#include <iostream>
using namespace std;

bool IsCharAlpha(char input);

int main () {
	char userInput;

	cout << "Enter a single character: ";
	
	cin >> userInput;

	if (IsCharAlpha(userInput)){
		cout << "You entered an alphabetic character." << endl;
	} else {
		cout << "You entered a non-alphabetic character." << endl;
	}
}

bool IsCharAlpha(char input) {
	if ( (input >= 65 && input <= 90) || (input >= 97 && input <= 122) ){
		return true;
	} else {
		return false;
	}
}
