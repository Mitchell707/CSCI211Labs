#ifndef _DSTACK_H_
#define _DSTACK_H_

#include <iostream>

using namespace std;

class Dstack
{
    private:
        double *s;
        int top;

    public:
        void push(double value);
        bool pop(double &value);
        int size();
        bool empty()
        {   
            return top;   
        }
        Dstack();

};

#endif
