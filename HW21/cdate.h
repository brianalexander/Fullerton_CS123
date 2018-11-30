// ============================================================================
// File: cdate.h (Fall 2018)
// ============================================================================

#ifndef CDATE_H
#define CDATE_H

#include    <iostream>
using namespace std;

class   CDate
{
public:
    // constructors
    CDate();
    CDate(const CDate  &other);
    CDate(int  year);

    // member functions
    void    DispDate(ostream  &outStream = cout) const;
    int     GetDay() const;
    int     GetMonth() const;
    int     GetYear() const;
    bool    SetDay(int  day);
    bool    SetMonth(int  month);
    bool    SetYear(int  year);

private:
    int     m_month;
    int     m_day;
    int     m_year;
};

// overloaded insertion operator
ostream&    operator<<(ostream  &outStream, const CDate &rhs);

#endif  // CDATE_H
