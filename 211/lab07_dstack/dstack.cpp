#include <iostream>
#include "dstack.h"

using namespace std;

void Dstack::push(double value)
{
    s[top++] = value;
    
}

bool Dstack::pop(double &value)
{
    if(!empty())
    {
        top--;
        value = s[top];
        return true;
    }
    else
    {
        return false;
       
    }
}
