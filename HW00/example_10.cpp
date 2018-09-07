#include <iostream>
using namespace std;

// function prototype
void	DrawBox();

int	main()
{
	cout << "About to call the DrawBox function..." << endl << endl;
	DrawBox();
	cout << endl << "DrawBox function returned." << endl;
	return 0;
}

// Drawbox function
void	DrawBox()
{
	cout << "|--------------------|" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|                    |" << endl;
	cout << "|--------------------|" << endl;
} // end of "DrawBox"
