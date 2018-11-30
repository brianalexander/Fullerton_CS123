// ============================================================================
// File: main.cpp (Fall 2018)
// ============================================================================
// Programmer: Brian Alexander 
// Date: 11/14/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: 4:30 - 6:30 (MW)
// Instructor: Mr. Edwards
// Project: Pigs
//
// Description:
//      This program creates two player objects.  It then takes an input for
//      each of their names and begins the game loop.  In the game loop each
//      player is prompted to roll the die, pass, or quit.  The first user to
//      win by reaching a score of 100 points wins the game.
//      
// ============================================================================

#include    <iostream>
using namespace std;
#include    "cpigplayer.h"


// function prototypes
void    DispScores(const CPigPlayer  &playOne, const CPigPlayer  &playTwo);


// ==== main ==================================================================
// 
// ============================================================================

int     main()
{
    char                name[NAMELEN];
    CPigPlayer          playerOne;
    CPigPlayer          playerTwo;

    // seed the random number generator with the current system time
    srand(time(NULL));

    // get names for the players
    cout << "Please enter a name for player #1: ";
    cin.getline(name, NAMELEN);
    playerOne.SetName(name);
    cout << "Please enter a name for player #2: ";
    cin.getline(name, NAMELEN);
    playerTwo.SetName(name);

    // loop and let the players alternate turns, until one of them wins
    while(true)
    	{
	DispScores(playerOne, playerTwo);
	if (playerOne.TakeTurn() )
		{
		break;
		}
	DispScores(playerOne, playerTwo);
	if ( playerTwo.TakeTurn() ) 
		{
		break;
		}
	}


    cout << "Bye, thanks for playing!" << endl << endl;
    return 0;

}  // end of "main"



// ==== DispScores ============================================================
// 
// This function displays the current scores of the two CPigPlayer parameters
// to stdout.
// 
// Input:
//      playOne [IN]    -- a const reference to the first CPigPlayer object
// 
//      playTwo [IN]    -- a const reference to the second CPigPlayer object
// 
// Output:
//      Nothing.
// 
// ============================================================================

void    DispScores(const CPigPlayer  &playOne, const CPigPlayer  &playTwo)
{
    cout << endl;
    cout << "================== Current Scores ==================" << endl;
    playOne.WriteName();
    cout << ": " << playOne.GetScore() << " points" << endl;
    playTwo.WriteName();
    cout << ": " << playTwo.GetScore() << " points" << endl;
    cout << "====================================================" << endl;
    cout << endl;

}  // end of "DispScores"
