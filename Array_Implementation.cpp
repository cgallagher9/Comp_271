#include <iostream>
#include "tile.h"


using namespace std;

//Takes the difficulty char as a parameter, and generates
//a 6*6 or 9*9 2D array respectively for the game board.

bool Array_Board(char &x)
{
    x = tolower(x);
    int sze = 0;    //saves the size of the array. To be used with for-loop.
    int ** Board;

    //Determines the size of the board, updates sze, and informs the user.
    if (x == 'e')
    {
    cout<<"You have selected an easy game."<<endl;
    Board= new int* [6];
    sze = 6;
    }

    else{
            if (x == 'n')
            {
            cout<<"You have selected a normal game."<<endl;
            Board= new int* [9];
            sze = 9;
            }
        }

    for (int i = 0; i < sze; i++)
    {
        Board[i]=new int[sze];
        for (int j = 0; j < sze; j++) Board[i][j] = 0;
    }

return true;
}
