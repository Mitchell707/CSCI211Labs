#ifndef _DSTACK_H_
#define _DSTACK_H_

#include <iostream>

using namespace std;

class Dstack
{
    private:
        double *s;
        double *top;
        int Lsize;

        class Node
        {
            public:
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
        int size(){return Lsize;};
        void incrementSize(){Lsize++;};
        void decrementSize(){Lsize--;};
        bool empty();
        Dstack();

};

#endif
