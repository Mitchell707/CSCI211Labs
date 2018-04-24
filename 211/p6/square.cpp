//square.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <string>
#include "square.h"
#include "grid.h"
#include "shape.h"

using namespace std;
/*
Square(int a, int b, int m_size) : Shape(x, y)
{
    size = m_size;

}
*/

void Square::draw(Grid &grid)
{
    
    //grid.arr[x][y] = "*";
    grid.set(x + size, y + size, '*');

    for(int i = x; i < x + size; i++)
    {
        //grid.arr[i][y] = "*";
        //grid.arr[i][y + size] = "*";

        grid.set(i, y, '*');
        grid.set(i, y + size, '*');
    }

    for(int i = y; i < y + size; i++)
    {
        //grid.arr[x][i] = "*";
        //grid.arr[x + size][i] = "*";

        grid.set(x, i, '*');
        grid.set(x + size, i, '*');
    }
    
}
