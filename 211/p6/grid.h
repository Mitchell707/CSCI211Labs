//grid.h
//Beck, Mitchell
//mbeck16

#ifndef _GRID_H_
#define _GRID_H_

#include <iostream>
#include <string>

using namespace std;

class Grid
{
  private:
    char arr[60][24];

  public:
    Grid();
    void set(int, int, char);
    void print();

};

#endif
