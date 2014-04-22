
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include "array_board.h"
#include "display_board.h"
#include "smart_array.h"

using namespace std;

int main()
{
char difficulty = 'a'; //how the user chooses which difficulty to play.

cout<<"\tLet's play Sudoku!"<<endl;
cin.ignore();
cout<<"\nSelect difficulty."<<endl;
//prints in such a way that there are two parallel difficulty text boxes.
cout<<"\n      Easy: \t \t \tNormal:"<<endl;
cout<<"A 6x6 game board \tA 9x9 game board \nfor those that \t \tfor those that are \nnew to sudoku. \t\tfamiliar with sudoku."<<endl;

while((difficulty != 'e') && (difficulty != 'n'))
{
cout<<"\nType 'e' for easy or 'n' for normal."<<endl;
cin>>difficulty;
}
smart_array Board = Array_Board(difficulty); //generates the game board
display_board(Board, difficulty);
}

