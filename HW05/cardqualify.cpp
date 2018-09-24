#include <iostream>

using namespace std;

// ==============================
// Prototypes
// ==============================
bool CheckQualify(double numYears, double hourlyWage, double hoursPerWeek);

double CalcSalary(double hourlyWage, double hoursPerWeek);

void DispQualify(bool qualified);

int main() {
	double numYears;
	double hourlyWage;
	double hoursPerWeek;

	cout << "Enter the number of years the user has spent at his/her current job >> ";
	cin >> numYears;

	cout << "Enter the number of hours per week that he or she works >> ";
	cin >> hoursPerWeek;

	cout << "Enter the hourly wage of the worker >> ";
	cin >> hourlyWage;

	DispQualify(CheckQualify(numYears, hourlyWage, hoursPerWeek));

	return 0;
}

void DispQualify(bool qualified) {
	if( qualified ) {
		cout << "You qualified!" << endl;
	} else {
		cout << "You didn't qualify!" << endl;
	}
}

bool CheckQualify(double numYears, double hourlyWage, double hoursPerWeek) {
	if( (numYears >= 2) && (CalcSalary(hourlyWage, hoursPerWeek) >= 17000) ) {
		return true;
	} else {
		return false;
	}
}



double CalcSalary(double hourlyWage, double hoursPerWeek) {
	return hourlyWage * hoursPerWeek * 52;
}
