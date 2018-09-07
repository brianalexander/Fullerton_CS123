#include <iostream>
using namespace std;

void DispMesg(int counter);


int main () {
	int numTimes;
	
	cout << "How many times do you want to be reminded?";
	cin >> numTimes;

	DispMesg(numTimes);

	return 0;
}

void DispMesg(int counter) {
	int current;
	current = 1;

	while(current <= counter) {
		cout << "#" << current << ": Do your homework!" << endl;
		current++;
	}
}
