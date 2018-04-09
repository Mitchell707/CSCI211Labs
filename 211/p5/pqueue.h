//pqueue.h
//Beck, Mitchell
//mbeck16

#ifndef _PQUEUE_H_
#define _PQUEUE_H_

#include <iostream>
#include "cust.h"

class Pqueue
{
    public:
        Pqueue();
        ~Pqueue();

        void enqueue(Cust* cust, int);
        void dequeue();
        

    private:
        class Node
        {
            public:
                Node(Cust* cust, int priority, Node *next)
                {m_value = cust; m_priority = priority; m_next = next;}
                Cust* m_value;
                int m_priority;
                Node *m_next;
        };
        
        Node *m_head;
        int m_length;


};

#endif
