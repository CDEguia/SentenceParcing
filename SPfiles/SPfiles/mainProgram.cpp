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
#include <cstring>

using namespace std;
int main()
{
	char cont;
	char reservedWords[4][10] = { "cout<<","for","int","while" };
	char special[7][3] = { "=" , "*" , "-" , ";" , "(" , ")" , "<=" };

	do
	{
		

		cout << "\tContinue (y/n)? "; cin >> cont; cont = toupper(cont);
		cout << endl;
		cin.ignore();
	} while (cont != 'N');
	system("Pause");
	return 0;
}