#include <iostream>
#include <stack>
#include <array>
#include "tile.h"
#include "smart_array.h"


using namespace std;

//Takes the difficulty char as a parameter, and generates
//a 6*6 or 9*9 2D array respectively for the game board.



smart_array Array_Board(char &x)
{
    x = tolower(x);
    //Determines the size of the board, updates number, and informs the user.

    if (x == 'e')
    {
    cout<<"You have selected an easy game."<<endl;
    Board.tiles = new int*[6];
    Board.number = 6;
    }

    else{
            if (x == 'n')
            {
            cout<<"You have selected a normal game."<<endl;
            Board.tiles = new int*[9];
            Board.number = 9;
            }
        }

    for (int i = 0; i < Board.number; i++) //Makes each space in 2D array = 0.
    {
        Board.tiles[i]= new int[Board.number];
        for (int j = 0; j < Board.number; j++)
        {
            Board.tiles[i][j] = 0;
        }
    }

return Board;
}
