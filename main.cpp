#include <iostream>
#include <string>
#include "tile.h"
//#include "game_types.cpp"

using namespace std;

bool easy_game()
{
cout<<"\neasy"<<endl;
//Generates a 6x6 game board
//with no more than 3 values pre-determined
//for each row, column and sub-cube.

return false;
}

bool normal_game()
{
cout<<"\nnormal"<<endl;
//Generates a 9x9 game board 
//with between 2 and 5 pre-determined values
//for each row, column, and sub-cube.

return false;
}

bool game_type(char &diff)
{
char diff2 = tolower(diff);

if (diff == 'e') easy_game();
if (diff == 'n') normal_game();

return true;
}

int main()
{
char difficulty = 'a';

cout<<"\tLet's play Sudoku!"<<endl;
cout<<"\n\tSelect difficulty."<<endl;


//prints in such a way that there are two parallel difficulty text boxes.
cout<<"\n      Easy: \t \t \tNormal:"<<endl;
cout<<"A 6x6 game board \tA 9x9 game board \nfor those that \t \tfor those that are \nare new to sudoku. \tare familiar with sudoku."<<endl;

while((difficulty != 'e') && (difficulty != 'n'))
{
cout<<"\nType 'e' for easy or 'n' for normal."<<endl;
cin>>difficulty;
} 
game_type(difficulty);
}

