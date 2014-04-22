#include <iostream>
#include <vector>
#include <array>
#include "array_board.h"
#include "smart_array.h"

using namespace std;

bool display_board(smart_array Board)
{

cout<<"\n- - - - - - - - - - - - - - - - - - - - - -"<<endl;

    for(int i = 0; i<Board.number; i++)
    {
        if (i == 2 || i == 5 || i==8) cout<<"#######";

        for(int j = 0; j<Board.number; j++)
        {
            cout<< " '" << Board[i][j] << "' ";
            if( j == 2 || j == 5 || j==8) cout<<"#";
        }
    }
return true;
}
