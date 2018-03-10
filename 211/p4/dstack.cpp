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
    incrementSize();  

}

double Dstack::pop()
{
    double value = 0;

    if(!empty())
    {
        value = m_head->m_value;
        Node *temp = m_head;
        m_head = m_head->m_next;
        delete temp;
        decrementSize();
        
        return value;
    }
    else
    {
        

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
