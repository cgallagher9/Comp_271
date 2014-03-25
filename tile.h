#include <iostream>
#include <string>


using namespace std;

//Represents each of the 27 spaces in a sudoku game.
class tile
{
private:
char row_name; //a - i
char column_name;  //r - z
int value; //a value between 1 and 9

public:
//setters and getters declaration
bool set_row(char &row); // i_n = item_name
char get_row();

bool set_column(char &column);
char get_column();

bool set_value(int &v);
int get_value();

//constructor and destructor declaration
tile();
tile(char rn, char cn, int v);

};

//setters and getters definition
bool tile::set_row(char &row)
{
row_name = row;
return true;
}

char tile::get_row()
{
return row_name;
}

bool tile::set_column(char &column)
{
column_name = column;
return true;
}

char tile::get_column()
{
return column_name; 
}

bool tile::set_value(int &v)
{
value = v;
return true;
}

int tile::get_value()
{
return value;
}

//constructor and destructor definition
tile::tile()
{}

tile::tile(char rn, char cn, int v)
{
row_name = rn;
column_name = cn;
value = v;
}





