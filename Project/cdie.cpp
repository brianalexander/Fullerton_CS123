#include <cstdlib>
#include <iostream>
#include "cdie.h"
using namespace std;



CDie::CDie(int initVal)
{
m_value = initVal;
} // end constructor



void CDie::Draw() const
{
cout << "*********" << endl;

switch(m_value)
	{
	case 1:
		cout << "*       *" << endl;
		cout << "*   @   *" << endl;
		cout << "*       *" << endl;
		break;
	case 2:
		cout << "* @     *" << endl;
		cout << "*       *" << endl;
		cout << "*    @  *" << endl;
		break;
	case 3:
		cout << "* @     *" << endl;
		cout << "*   @   *" << endl;
		cout << "*     @ *" << endl;
		break;
	case 4:
		cout << "* @   @ *" << endl;
		cout << "*       *" << endl;
		cout << "* @   @ *" << endl;
		break;
	case 5:
		cout << "* @   @ *" << endl;
		cout << "*   @   *" << endl;
		cout << "* @   @ *" << endl;
		break;
	case 6:
		cout << "* @   @ *" << endl;
		cout << "* @   @ *" << endl;
		cout << "* @   @ *" << endl;
		break;
	default:
		cout << "out of range" << endl;
	}		

cout << "*********" << endl;
} // end "CDie::Draw"



int CDie::GetVal() const
{
return m_value;
} // end "CDie::GetVal"



void CDie::Toss()
{
m_value = (rand() % 6) + 1;
} // end "CDie::Toss"
