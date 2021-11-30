#include "std_lib_facilities.h"
#include <iostream>

//x variable actually changed in this function
int normalTest(int x, int y)
{
    x = x+y;
    return x+y;
}

//unable to change variable in this function
int constantTest(const int x, const int y)
{
    return x+y+y;
}

int main()

{
	int x = 10;
    int y = 20;

    cout << "Function passing normal variable: "<< normalTest(x,y);
    cout << "\nFunction passing constant variable: "<< constantTest(x,y);
}

//constant variables can't be changed when they are defined within the program
//There are few reasons for doing this but by passing a constant variable
//you can protect data for some specific objects when passing them
