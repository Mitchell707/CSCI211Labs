//grid.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <string>
#include "grid.h"

using namespace std;

void Grid::set(int x, int y, char c)
{
    arr[x][y] = c;

}

void Grid::print()
{
    for(int x = 0; x < 60; x++)
    {
        for(int y = 0; y < 24; x++)
        {
            cout << arr[x][y];

        }

        cout << endl;

    }

}
