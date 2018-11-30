// ============================================================================
// File: croom.h (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Mr. Edwards
//
// Description:
//      This header file contains the declaration of the CRoom class, which is
//      used to represent a single room in a house.
// ============================================================================

#ifndef CROOM_H
#define CROOM_H

class   CRoom
{
public:
    // constructors
    CRoom() { m_length = m_width = 0; }
    CRoom(double  lVal, double  wVal) { m_length = lVal; m_width = wVal; }

    // accessor functions
    double  GetLength() const { return m_length; }
    double  GetWidth() const { return m_width; }
    void    SetLength(double  lVal) { m_length = lVal; }
    void    SetWidth(double  wVal) { m_width = wVal; }

    // other member functions
    double   CalcArea() const { return m_length * m_width; }
    double   CalcPerimeter() const
                        { return (m_length * 2) + (m_width * 2); }

private:
    double      m_length;
    double      m_width;
};

#endif  // CROOM_H
