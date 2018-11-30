// ============================================================================
// file: ccalc.cpp
// ============================================================================
// Programmer: Scott Edwards
// Date: 11/04/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: MW 04:30pm
// Instructor: Mr. Edwards
// Project: CCalc
//
// Description:
//      This file defines the fuctions using for the CCalc class.
//
// ============================================================================


#include <iostream>
#include "ccalc.h"
using namespace std;



CCalc::CCalc()
{
m_total = 0;
}

void CCalc::Add(double value)
{
m_total += value;
} // End "CCalc::Add"



void CCalc::Clear() 
{
m_total = 0;
} // End "CCalc::Total"



void CCalc::Divide(double value)
{
if (value != 0) 
	{
	m_total /= value;
	}
else
	{
	cout << "Cannot divide by 0!" << endl;
	}
} // End "CCalc::Divide"



double CCalc::GetValue() const 
{
return m_total;
} // End "CCalc::GetValue"



void CCalc::Multiply(double value)
{
m_total *= value;
} // End "CCalc::Multiply"



void CCalc::SetValue(double newValue)
{
m_total = newValue;
} // End "CCalc::SetValue"



void CCalc::Subtract(double value)
{
m_total -= value;
} // End "CCalc::Subtract
