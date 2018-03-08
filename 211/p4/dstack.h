//dstack.h
//Beck, Mitchell
//mbeck16

#ifndef _DSTACK_H_
#define _DSTACK_H_

#include <iostream>

using namespace std;

class Dstack
{
    private:
        int Isize;

        class Node
        {
            Node(double val, Node *next)
            {m_value = val; m_next = next;}
            double m_value;
            Node *m_next;

        };
        
        Node *m_head;
        int m_length;

    public:
        void push(double value);
        bool pop(double &value);
        int size(){return Isize;};
        void increment(){Isize++;};
        void decrement(){Isize--;};
        bool isEmpty();
        Dstack();

};

#endif
