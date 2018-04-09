//cust.h
//Beck, Mitchell
//mbeck16

#ifndef _CUST_H_
#define _CUST_H_

#include <iostream>
#include <string>

using namespace std;

class Cust
{
    private:
        string name;
        string title;
        int clock;
        int items;

    public:
        Cust(string, string, int, int); 
        void print_entered(ostream, int);
        
};

#endif
