// ============================================================================
// File: cpigplayer.cpp (Fall 2018)
// ============================================================================
// Programmer: Brian Alexander 
// Date: 11/14/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: 4:30 - 6:30 (MW)
// Instructor: Mr. Edwards
// Project: Pigs
//
// Description:
//      This file contains the definitions for the member functions of the 
//      CPigPlayer class.
//      
// ============================================================================

#include <cstdlib>
#include <iostream>
#include "cpigplayer.h"
using namespace std;



// ==== DispScores ============================================================
// 
// Calls the CDIe::Draw function which displays the die value to the user.
// 
// Input:
//	Nothing. 
// Output:
//      Nothing.
// 
// ============================================================================

void CPigPlayer::ShowDice() const
{
for (int i = 0; i < NUMDICE; i++)
	{
	m_dice[i].Draw();
	}		
} // end "CPigPlayer::ShowDice"



// ==== CPigPlayer::RollDice ==================================================
// 
// Calls the CDie::Toss function on each die.  Sets a new random value.
// 
// Input:
//	Nothing. 
// Output:
//      Nothing.
// 
// ============================================================================

void CPigPlayer::RollDice() 
{
for (int i = 0; i < NUMDICE; i++)
	{
	m_dice[i].Toss();
	}
} // end "CPigPlayer::RollDice"



// ==== CPigPlayer::TakeTurn ==================================================
// 
// This function performs on turn of Pig for the player.
// 
// Input:
//	Nothing. 
// Output:
//      Returns true if the game should end and false if the game continues 
// 
// ============================================================================

bool CPigPlayer::TakeTurn()
{
char choice;
int turnTotal = 0;

do
	{
	WriteName();
	cout << "'s score is " << m_score + turnTotal;
	cout << ": roll (Y, n, q) ";
	cin >> choice;
	
	switch (toupper(choice))
		{
		case 'Y':
		RollDice();
		ShowDice();
		if ( !(m_dice[0].GetVal() == 1) && 
				!(m_dice[1].GetVal() == 1) )
			{
				turnTotal = turnTotal +  m_dice[0].GetVal() + 
					m_dice[1].GetVal(); 
				if ( (turnTotal+m_score) >= 100 )
					{
					WriteName();
					cout << " wins!" << endl;
					return true;
					}
			}	
		else if ( ((m_dice[0].GetVal() == 1) || 
					(m_dice[1].GetVal() == 1)) && 
				!(m_dice[0].GetVal() == 1 && 
					m_dice[1].GetVal() == 1))
	       		{
			return false;
			}
		else if ( (m_dice[0].GetVal() == 1) && 
				(m_dice[1].GetVal() == 1) )
			{
			m_score = 0;
			return false;
			}
		break;

		case 'N':
		m_score += turnTotal;
		return false;

		case 'Q':
		return true;

		default:
		cout << "Your entry was incorrect." << endl;
		break;
		}

	}
while(m_score < 100);

	return true;
} // end "CPigPlayer::TakeTurn"
