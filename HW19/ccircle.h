// ============================================================================
// File: CCircle.h (Fall 2018)
// ============================================================================

#ifndef CCIRCLE_HEADER
#define CCIRCLE_HEADER

#include    <iostream>
#include    <cstring>
#include    <cmath>
#include    <cstdlib>
using namespace std;

const   double      PI = 3.14;

class   CCircle
{
public:
    // constructors
    CCircle();
    CCircle(double  radius);
    CCircle(const CCircle  &other);

    // overloaded operators
    void    operator++();
    void    operator--();
    bool    operator==(const CCircle  &rhs) const;
    bool    operator!=(const CCircle  &rhs) const;
    bool    operator<(const CCircle  &rhs) const;
    bool    operator>(const CCircle  &rhs) const;

    // other member functions
    double  GetRadius() const;
    void    SetRadius(double  radius);
    double  GetArea() const;
    double  GetCircumference() const;
    void    ShowCircleInfo(ostream  &outStream = cout) const;

private:
    double      m_radius;
};

#endif  // CCIRCLE_HEADER
