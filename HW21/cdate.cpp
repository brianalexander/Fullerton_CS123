#include "cdate.h"
#include <iostream>
#include <iomanip>

using namespace std;



CDate::CDate()
{
m_month = 00;
m_day = 00;
m_year = 0000;
} // end default constructor



CDate::CDate(const CDate &other)
{
m_month = other.GetMonth();
m_day = other.GetDay();
m_year = other.GetYear();
} // end copy constructor



CDate::CDate(int year)
{
m_month = 00;
m_day = 00;
m_year = year;
} // end int type-conversion constructor



int CDate::GetMonth() const
{
return m_month;
}



int CDate::GetDay() const
{
return m_day;
}



int CDate::GetYear() const
{
return m_year;
}



bool CDate::SetDay(int day)
{
if(day > 31 || day < 1) 
	{
	return false;
	}
else
	{
	m_day = day;
	return true;
	}
}



bool CDate::SetMonth(int month)
{
if(month > 12 || month < 1)
	{
	return false;
	}
else
	{
	m_month = month;
	return true;
	}
}



bool CDate::SetYear(int year)
{
if(year < 1000 || year > 9999)
	{
	return false;
	}
else 
	{
	m_year = year;
	return true;
	}
}



void CDate::DispDate(ostream &outStream) const
{
outStream << "The date is: " << setfill('0') 
	 << setw(2) << m_month;
outStream << "/";
outStream << setfill('0') << setw(2) <<  m_day; 
outStream << "/" << m_year << endl << endl;
}



ostream& operator<<(ostream &outStream, const CDate &rhs)
{
outStream << "(Using the overloaded inseration operator)" <<
	endl;
rhs.DispDate(outStream);
return outStream;
}
