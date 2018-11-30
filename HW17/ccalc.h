// ============================================================================
// File: ccalc.h (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
//
// Description:
//      This is the header file for the CCalc class.
// ============================================================================

#ifndef CCALC_HEADER
#define CCALC_HEADER

class   CCalc
{
public:
    // member functions
    CCalc();
    void    Add(double  value);
    void    Clear();
    void    Divide(double  value);
    double  GetValue() const;
    void    Multiply(double  value);
    void    SetValue(double  newValue);
    void    Subtract(double  value);

private:
    // data members
    double  m_total;
};

#endif  // CCALC_HEADER
