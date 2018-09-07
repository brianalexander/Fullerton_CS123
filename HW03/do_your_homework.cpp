#include <iostream>
using namespace std;

int main ()
{
	int times;
	int counter;
	cout << "How many times do you need to be reminded?";
	cin >> times;

	counter = 1;
	while (counter <= times) {
		cout << "#" << counter << ": Do your homework!" << endl;
		counter += 1;
	}

	return 0;
}

