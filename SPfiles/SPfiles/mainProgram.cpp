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
#include <string>

using namespace std;
int main()
{
	char cont;
	char reservedWords[4][10] = { "cout<<","for","int","while" };
	char special[8][3] = { "+" , "=" , "*" , "-" , ";" , "(" , ")" , "<=" };

	do
	{
		char *token;						// Pointer to character array
		char sent[80];						// Holds the Expression

		cout << "\tEnter a statement: "; cin.getline(sent,80);
		token = strtok(sent, " ");			//tokenize this statement
		while (token != NULL) {				//loops through each token
			cout << token << "\t";			//displays the current token
			bool found = false;				// changes to TRUE once token is identified
			for each(char set in special) {
				//cout << set;
				if (set == *token) { cout << "special symbol\n"; found = true; break; }
			}
			if (found == false) {
				for (int i = 0; i < 4; i++) {
					string word = reservedWords[i];
					//cout << word << endl;
					if (word == token) {
						cout << "reserved word\n"; found = true; break;
					}
				}
			}
			if (found == false && (token[0] >= '0' && token[0] <= '9')) {
				int i = 1;
				char singletoken = token[i];
				while(singletoken != NULL) {
					if (singletoken < '0' || singletoken > '9') { cout << "not identifier\n"; found = true; break; }
					singletoken = token[++i];
				}
				if (singletoken == NULL) { found = true; cout << "number\n"; }
				
			}
			if (found == false) cout << "identifier\n";
			
			token = strtok(NULL, " ");				// gets the next char array
		}

		cout << "\tContinue (y/n)? "; cin >> cont; cont = toupper(cont);
		cout << endl;
		cin.ignore();
	} while (cont != 'N');

	system("Pause");
	return 0;
}