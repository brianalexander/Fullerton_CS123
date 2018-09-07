#include <iostream>
using namespace std;

int main() {
	char selection;
	char temp;
	int counter;

	cout << "Do you wish to view upper (u) or lowercase (l) letters?";
	cin >> selection;

	if (selection == 'l') {
		// 97-122
		counter = 97;
		while ( counter <= 122 ){
			temp = counter;
			cout << temp << endl;
			counter += 1;
		}
	
	} else {
		// 65 - 90
		counter = 65;
		while ( counter <= 90 ){
			temp = counter;
			cout << temp << endl;
			counter += 1;
		}
	}

}
