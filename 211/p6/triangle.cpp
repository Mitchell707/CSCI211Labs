//triangle.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <string>
#include "triangle.h"
#include "grid.h"
#include "shape.h"

using namespace std;

void Triangle::draw(Grid &grid)
{
    grid.set(x + 2, y, '+');
    
    grid.set(x + 1, y + 1, '+');
    grid.set(x + 3, y + 1, '+');

    for(int i = x; i < x + 4; i++)
    {
        grid.set(x + i, y + 3, '+');
    }

}
