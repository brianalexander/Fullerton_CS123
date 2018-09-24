// ============================================================================
// // file: dentalplan.cpp
// // ============================================================================
// // Programmer: Brian Alexander
// // Date: 09/18/2018
// // Class: CSCI 123 ("Intro to Programming Using C++")
// // Time: MW 04:30pm
// // Instructor: Mr. Edwards
// // Project: Dental Plan
// //
// // Description:
// //      This program is used to caculate the fees applied to a patient visit at
// //      a dentist's office.  The user is prompted for the status of a patient, 
// //      member or non-member.  Then a either a copayment and a prompt for additional
// //      fees are given or prompts for xray, cleaning, and exam fees are given.
// //      Finally the total bill is calculated and displayed to the user.
// //
// // ============================================================================

#include <iostream>
using namespace std;

// function prototypes
double GetCopayment(int accountNum);
double CalcTotal(double payment, double addCharges);
double CalcTotal(double xRay, double cleaning, double exam);


// ==== main ==================================================================
// //
// // =========================================================================
int main() 
{
	char member;
	int accountNum;
	double payment;
	double additionalServices;
	double nonMemberXRay;
	double nonMemberCleaning;
	double nonMemberExam;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Is the patient a M)ember or N)on-member?";
	cin >> member;

	if(member == 'M' || member == 'm')
		{
		cout << "Please enter the account number: ";
		cin >> accountNum;
		payment = GetCopayment(accountNum);
		if (payment < 0)
			{
			cout <<"There appears to be a problem with " <<
				"your account..." << endl;
			return 0;
			} 
		else
	       		{
			cout << "Please enter the total amount for " <<
			       	"additional services: $";
			cin >> additionalServices;
			}
		
			cout << "The total bill is $" << CalcTotal(payment, 
					additionalServices) << endl;
		}
	else if(member == 'N' || member == 'n')
		{
		cout << "Please enter the x-ray charge: $";
		cin >> nonMemberXRay;
		cout << "Please enter the cleaning charge: $";
		cin >> nonMemberCleaning;
		cout << "Please enter the examination fee: $";
		cin >> nonMemberExam;
		
		cout << "The total bill is $" << CalcTotal(nonMemberXRay, 
				nonMemberCleaning, nonMemberExam) << endl;
		}
	else
		{
		cout << "The only acceptable options are " <<
			"M)ember or N)on-member.  Please try again." << endl;
		}

	return 0;
}  // end of "main"



// ==== GetCopayment ========================================================
// //
// // This function returns the copayment for a patient depending upon
// // their account number.
// //
// // Input:
// //      accountNum[IN]  -- an integer value containing the account number for 
// //                     the current patient.
// //
// // Output:
// //      The users copayment in dollars OR -1 if the account number is invalid.
// //
// // ============================================================================

double GetCopayment(int accountNum)
{
	if ( accountNum >= 100000 && accountNum <= 399999 )
		{	
		return 15.00;
		} 
	else if ( accountNum >= 400000 && accountNum <= 699999 )
		{
		return 10.00;
		} 
	else if ( accountNum >= 700000 && accountNum <= 999999 )
		{
		return 5.00;
		} 
	else
		{
		return -1;
		}
} // end of GetCopayment



// ==== CalcTotal =============================================================
// //
// // This function calculates the total for a patient's visit to the dentist.
// //
// // Input:
// //      payment [IN]  -- a double representing the patient's copayment
// //
// //      addCharges [IN]  -- a double representing other charges not yet 
// //				included.
// //
// // Output:
// //      The sum of all charges with an 8% discount.
// //
// // ============================================================================

double CalcTotal(double payment, double addCharges)
{
	return (payment + addCharges) * 0.92;
} // end of CalcTotal


// ==== CalcTotal =============================================================
// //
// // This function calculates the total for a patient's visit to the dentist.
// //
// // Input:
// //      xRay [IN]  -- a double representing the charge for an X-Ray. 
// //
// //      cleaning [IN]  -- a double representing the charge for a cleaning.
// //
// //      exam [IN]  -- a double representing the charge for an exam.
// //
// // Output:
// //      The sum of all charges with a 12% surchage added.
// //
// // ============================================================================

double CalcTotal(double xRay, double cleaning, double exam)
{
	return (xRay + cleaning + exam) * 1.12;
} // end of CalcTotal
