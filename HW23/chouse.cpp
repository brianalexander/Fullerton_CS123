#include <iostream>
#include "chouse.h"
using namespace std;



CHouse::CHouse(int numRooms)
{
cout << "(Chouse type conversion ctor called...)" <<endl;
m_numRooms = numRooms;
m_rooms = new CRoom[numRooms];
}



CHouse::~CHouse()
{
cout << "(CHouse dtor called...)" << endl;
delete [] m_rooms;
}



CHouse::CHouse(const CHouse &other)
{
cout << "(CHouse copy ctor called...)" << endl;
m_numRooms = other.GetNumRooms();
m_rooms = new CRoom[m_numRooms];
for(int i = 0; i < m_numRooms; i++) 
	{
	m_rooms[i] = other.m_rooms[i];
	}
}


void CHouse::SetRoomSizes() 
{
int width;
int length;
for(int i = 0; i < m_numRooms; i++)
	{
	cout << "Room #" << i+1 << endl;
	cout << "Enter the width: ";
	cin >> width;
	cout << "Enter the length: ";
	cin >> length;
	m_rooms[i].SetLength(length);
	m_rooms[i].SetWidth(width);
	}
}



double CHouse::GetTotalArea() const 
{
double total = 0;
for(int i = 0; i < m_numRooms; i++) 
	{
	total += m_rooms[i].CalcArea();
	}	
return total;
}
