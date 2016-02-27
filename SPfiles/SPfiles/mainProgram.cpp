//------------------------------------------------------------------------------------------
//          Name		Candelario D. Eguia
//          Course		CMPS-455
//          Project		No.2
//          Due date	Feb. 26, 2015
//          Professor	Ray Ahmadnia
//
// This program displays:
//       Evaluate postfix expressions with multiple letter variables
//------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
	char cont;

	do
	{

		cout << "\tContinue (y/n)? "; cin >> cont; cont = toupper(cont);
		cout << endl;
		cin.ignore();
	} while (cont != 'N');
	system("Pause");
	return 0;
}