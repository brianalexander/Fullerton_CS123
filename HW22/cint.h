// ============================================================================
// File: cint.h (Fall 2018)
// ============================================================================
// Programmer: Brian Alexander
// Date: 11/26/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: 04:30pm MW
// Instructor: Prof. Edwards
//
// Description:
//      ADT that stores a dynamically allocated int.
// ============================================================================

#ifndef CINT_HEADER
#define CINT_HEADER

// class declaration
class   CInt
{
public:
    // constructor and destructor
    CInt(int intVal) { m_intPtr = new int;
	     *m_intPtr = intVal;
   		cout <<"CInt Constructor, *m_intPtr="<< *m_intPtr << endl; }
    ~CInt() { 
   	    cout <<"CInt Destructor, *m_intPtr="<< *m_intPtr <<endl;
	    delete m_intPtr; }


    // accessor and mutator functions
    int     GetInt() const { return *m_intPtr; }
    void    SetInt(int  intVal) { *m_intPtr = intVal; }

private:
    int     *m_intPtr;
};

#endif  // CINT_HEADER
