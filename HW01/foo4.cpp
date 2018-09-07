#include	<iostream>
using namespace std;

void DrawTriangle();

int	main()
{
	cout << "About to call the DrawTriangle function... " << endl << endl;
	DrawTriangle();
	cout << endl << "Returned from the DrawTriangle function" << endl;
	return 0;
}

void	DrawTriangle()
{
	cout << "            *" << endl;
	cout << "           * *" << endl;
	cout << "          *   *" << endl;
	cout << "         *     *" << endl;
	cout << "        *       *" << endl;
	cout << "       *         *" << endl;
	cout << "      *           *" << endl;
	cout << "     ***************" << endl;

}
