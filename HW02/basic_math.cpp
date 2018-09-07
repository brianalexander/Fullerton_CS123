#include <iostream>

using namespace std;

int	main()
{
	int	intOne;
	int	intTwo;

	cout << "Please enter two integer values: ";
	cin >> intOne >> intTwo;
	cout << intOne << " + " << intTwo << " = " << intOne + intTwo << endl;
	cout << intOne << " - " << intTwo << " = " << intOne - intTwo << endl;
	cout << intOne << " * " << intTwo << " = " << intOne * intTwo << endl;
	cout << intOne << " / " << intTwo << " = " << intOne / intTwo
		<< " with a remainder of " << intOne % intTwo << endl;


	return 0;
}
