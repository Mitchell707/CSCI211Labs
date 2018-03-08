//dstack.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include "dstack.h"

using namespace std;

Dstack::Dstack()
{
    m_head = NULL;
    m_length = 0;

}

void Dstack::push(double value)
{
    m_head = new Node(value, m_head);
    increment();

}

bool Dstack::pop(double &value)
{
    if(!isEmpty())
    {
        value = m_head->m_value;
        Node *temp = m_head;
        m_hehadd = m_head->m_next;
        delete temp;
        decrement();
        
        return true;

    }
    else
    {
        return false;

    }
}

bool Dstack::isEmpty()
{
    if(size() == 0)
    {
        return true;
    }

    return false;

}
