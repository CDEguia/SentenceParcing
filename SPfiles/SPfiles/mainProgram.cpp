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
#define _CRT_SECURE_NO_WARNINGS
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
		char *token;						// Pointer to character array
		char sent[80];						// Holds the Expression

		cout << "\tEnter a statement: "; cin.getline(sent,80);
		token = strtok(sent, " ");			//tokenize this statement
		while (token != NULL) {				//loops through each token
			cout << token << "\t";
			bool found = false;
			for each(char set in special) {
				if (set == *token) { cout << "special symbol\n"; found = true; }
			}
			if (!found) {
				for each(char set in reservedWords) {
					if (set == *token) { cout << "reserved word\n"; found = true; }
				}
			}
			token = strtok(NULL, " ");				// gets the next char array
		}
		cout << "\tContinue (y/n)? "; cin >> cont; cont = toupper(cont);
		cout << endl;
		cin.ignore();
	} while (cont != 'N');

	system("Pause");
	return 0;
}