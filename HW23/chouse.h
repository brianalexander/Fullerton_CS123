// ============================================================================
// File: chouse.h (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Mr. Edwards
// Description:
//      ???
//      
// ============================================================================

#ifndef CHOUSE_H
#define CHOUSE_H

#include    <iostream>
#include    <cstdlib>
using namespace std;
#include    "croom.h"

class   CHouse
{
public:
    // constructors and destructor
    CHouse(int  numRooms);
    CHouse(const CHouse  &other);
    ~CHouse();

    // member functions
    double  GetTotalArea() const;
    int     GetNumRooms() const { return m_numRooms; }
    void    SetRoomSizes();

private:
    CRoom  *m_rooms;
    int     m_numRooms;
};

#endif // CHOUSE_H
