#include <iostream>

using namespace std;

int	main()
{
	double	payOne;
	double	payTwo;
	double	payThree;
	double	payFour;
	double	payMonth;
	double	weekAvg;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Please enter the amount for paycheck #1: ";
	cin >> payOne;
	cout << "Please enter the amount for paycheck #2: ";
	cin >> payTwo;
	cout << "Please enter the amount for paycheck #3: ";
	cin >> payThree;
	cout << "Please enter the amount for paycheck #4: ";
	cin >> payFour;

	payMonth = payOne + payTwo + payThree + payFour;
	weekAvg = payMonth / 4; 

	cout << "You earned a total of $" << payMonth << " for the month, and your weekly average was $" << weekAvg << endl;


	return 0;
}
