// ============================================================================
// File: webhits.cpp (Fall 2018)
// ============================================================================
// Programmer: ???
// Date: ???
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: ???
// Instructor: Mr. Edwards
// Project: WebHits
//
// Description:
//      ???
//      ???
//      ???
//
// ============================================================================

#include    <iostream>
#include    <cstdlib>
#include    <fstream>
#include    <iomanip>
#include    <cstdlib>
using namespace std;

// defined constants
const int       LEN = 256;
const int       MAXDAYS = 365;
const int       DAY_NUM_WIDTH = 3;
const char      GRAPH_CHAR = '-';

// function prototypes
void    DispData(const int  dayints[], int  numdays, char  graphChar = 'x'
                                             , ostream  &outStream = cout);
int     ReadData(istream  &inStream, int  daysArray[], int  maxDays);



// ==== main ==================================================================
// 
// ============================================================================

int     main()
{
    char            inFname[LEN];
    char            outFname[LEN];
    ifstream        inFile;
    ofstream        outFile;
    int             totalDays;
    int             days[MAXDAYS] = {};

    // get the input filename from the user and open the file
    cout << "Please enter the name of the input file: ";
    cin.getline(inFname, LEN);
    inFile.open(inFname);
    if (inFile.fail())
        {
        cout << "Failed to open the input file: " << inFname << endl;
        exit(EXIT_FAILURE);
        }
    else
        {
        totalDays = ReadData(inFile, days, MAXDAYS);
        if (totalDays <= 0)
            {
            cout << "No data to process..." << endl;
            exit(EXIT_FAILURE);
            }
        }

    // if the user wants the bar graph written to an output file, get the
    // filename
    cout << "Enter the name of the output file, or just\n  press \"Enter\" to "
         << "write the results to the screen: ";
    cin.getline(outFname, LEN);

    // the .getline() function copies a cstring to the destination
    // buffer, so if the first char in the filename buffer is not NULL,
    // then we must have an actual filename, so let's use it to open
    // an output file
    if (outFname[0])
        {
        // open the output file
        outFile.open(outFname);
        if (outFile.fail())
            {
            // display an error message and close the input file
            cout << "Failed to open the output file: " << outFname << endl;
            inFile.close();
            exit(EXIT_FAILURE);
            }

        // write the graph data to the output file and close the file
        DispData(days, totalDays, GRAPH_CHAR, outFile);
        outFile.close();
        }
    else
        {
        // write the graph data to stdout
        DispData(days, totalDays, GRAPH_CHAR);
        }

    // tell the user how many days were processed
    cout << totalDays << " days processed." << endl;
    return 0;

}  // end of main


void    DispData(const int  dayints[], int  numdays, char  graphChar
                                             , ostream  &outStream)
{
	for (int i = 0; i < numdays; i++)
		{
		outStream << "Day " << setfill('0') << setw(3) 
			<< i+1 << ": ";
		for (int j = 0; j < dayints[i]; j++)
			{
			outStream << graphChar;
			}
		outStream << endl;
		}

}
int     ReadData(istream  &inStream, int  daysArray[], int  maxDays)
{
	int i = 0;
	while ( (inStream >> daysArray[i]) && (i < maxDays))
		{
			i++;
		}
	return i;
}


