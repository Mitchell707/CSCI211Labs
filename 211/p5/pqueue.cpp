//pqueue.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <stdio.h>
#include <assert.h>
#include "pqueue.h"
#include "cust.h"

using namespace std;

Pqueue::Pqueue() //Creates empty queue
{
    m_head = NULL;
    m_length = 0;

}

Pqueue::~Pqueue() //Deletes the queue
{
    while(m_head)
    {
        Node *tmp = m_head;
        m_head = m_head->m_next;
        delete tmp->m_value;
        delete tmp;

    }
}

void Pqueue::enqueue(Cust* cust, int priority) //Inserts an object into the queue with a priority ordering
{
    if(!m_head || m_head->m_priority > priority)
    {
        m_head = new Node(cust, priority, m_head);
    }
    else
    {
        Node *cur = m_head;
        while(cur->m_next != NULL && priority >= cur->m_next->m_priority);
        {
            cur = cur->m_next;
        }
        assert(cur != NULL);
        cur->m_next = new Node(cust, priority, cur->m_next);
    }
}

void Pqueue::dequeue() //Removes object from queue
{


}
