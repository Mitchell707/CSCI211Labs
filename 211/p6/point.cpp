//point.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <string>
#include "point.h"
#include "shape.h"
#include "grid.h"

using namespace std;

void Point::draw(Grid &grid)
{
    grid.set(x, y, c);

}
