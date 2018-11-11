//Noel Guzman
//lab #12

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
char board[9];
char xPOS='X', oPOS='O';
int turn = 0;
int i=0;

void showBoard(char board[]);

int main()
{
	//intialization bo   ard
	char board[9]= {'1','2','3','4','5','6','7','8','9'};
	showBoard(board);
	int playerX = 0;
	cout << "Tic-Tac-Toe! Enter the number from  corresponding to the position on the board.\n";
	//loop for turn which max at 9.
	do
	{
		//enter input and switch players
		if(playerX == 0)
		{
				while(playerX == 0)
				{
					cout << "Player One it is your turn:";
					cin >> i;
					board[i-1] = xPOS;
					turn = turn + 1;
					playerX = 1;
					showBoard(board);
				}
		}
		else
		{
			while(playerX == 1)
			{
				cout << "Player Two it is your turn:";
				cin >> i;
				board[i-1] = oPOS;
				turn = turn + 1;
				playerX = 0;
				showBoard(board);
			}
		}

	}while (turn <= 9);

	system ("Pause");
	return 0;
}

void showBoard(char board[])
{
	cout << endl;
	for (int i=0; i<9;i++)
	{
		cout << board[i] << " ";
		if (((i+1) % 3) == 0) cout << endl;
	}
	cout << endl;
}