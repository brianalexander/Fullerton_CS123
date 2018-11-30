// ============================================================================
// File: CCircle.h (Fall 2018)
// ============================================================================

#include    <iostream>
#include    <cstring>
#include    <cmath>
#include    <cstdlib>
#include    "ccircle.h"
using namespace std;



CCircle::CCircle()
{
cout << "CCircle::default ctor" << endl;
m_radius = 0;
} // end default constructor



CCircle::CCircle(double radius)
{
cout << "CCircle::type conv ctor" << endl;
m_radius = radius;
} // end (double) type conversion constructor



CCircle::CCircle(const CCircle &other)
{
cout << "CCircle::copy ctor" << endl;
m_radius = other.GetRadius();
} // end copy constructor



void CCircle::operator++()
{
m_radius += 1;
} // end "CCircle::operator++"



void CCircle::operator--()
{
if(m_radius >= 1)
{
m_radius -= 1;
}
} // end "CCircle::operator--"



bool CCircle::operator==(const CCircle &rhs) const
{
if (m_radius == rhs.GetRadius())
	{
	return true;
	}
else 
	{
	return false;
	}
} // end "CCircle::operator=="



bool CCircle::operator!=(const CCircle &rhs) const
{
if (m_radius != rhs.GetRadius())
	{
	return true;
	}
else 
	{
	return false;
	}
} // end "CCircle::operator!="



bool CCircle::operator<(const CCircle &rhs) const
{
if (m_radius < rhs.GetRadius())
	{
	return true;
	}
else 
	{
	return false;
	}
} // end "CCircle::operator<"



bool CCircle::operator>(const CCircle &rhs) const
{
if (m_radius > rhs.GetRadius())
	{
	return true;
	}
else 
	{
	return false;
	}
} // end "CCircle::operator>"



double CCircle::GetRadius() const
{
return m_radius;
} // end "CCircle::GetRadius"



void CCircle::SetRadius(double radius)
{
m_radius = radius;
} // end "CCircle::GetArea"



double CCircle::GetArea() const
{
return PI * m_radius * m_radius;
} // end "CCircle::GetArea"



double CCircle::GetCircumference() const
{
return 2 * PI * m_radius;
} // end "CCircle::GetCircumference"



void CCircle::ShowCircleInfo(ostream &outStream) const
{
outStream << "radius = " << m_radius << ", area = "
      << GetArea() << ", circumference = " << GetCircumference(); 
}

/*
class   CCircle
{
public:

    // other member functions
    void    ShowCircleInfo(ostream  &outStream = cout) const;

private:
    double      m_radius;
};
*/
