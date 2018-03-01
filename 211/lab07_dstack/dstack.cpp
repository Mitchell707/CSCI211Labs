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
    incrementSize();    
}

bool Dstack::pop(double &value)
{
    if(!empty())
    {
        value = m_head->m_value;
        Node *temp = m_head;
        m_head = m_head->m_next;
        delete temp;
        decrementSize();
        
        return true;
    }
    else
    {
        return false;
       
    }
}

bool Dstack::empty()
{
    if(size() == 0)
    {
        return true;
    }

    return false;
}
