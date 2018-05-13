//bst.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <string>
#include <vector>
#include "bst.h"

using namespace std;

Bst::Bst()
{
    m_root = new Node;
    //m_root->right = NULL;
    //m_root->left = NULL;

}

Bst::~Bst()
{

}

bool Bst::insert(string str, Node *cur)
{
    //cout << m_root->m_value << endl;

    if(m_root->m_value.empty())
    {
        m_root->m_value = str;
        
        m_root->right = NULL;
        m_root->left = NULL;
        length++;
    }
    else if(str < cur->m_value)
    {
        if(cur->left != NULL)
        {
            insert(str, cur->left);
        }
        else
        {
            //cout << "Left\n";

            cur->left = new Node;
            cur->left->m_value = str;
            cur->left->left = NULL; //Left child of child node to NULL
            cur->left->right = NULL; //Right child of child node to NULL
            length++;
            //return true;
        }
    }
    else if(str > cur->m_value)
    {
        if(cur->right != NULL)
        {
            insert(str, cur->right);
        }
        else
        {
            //cout << "Right\n";

            cur->right = new Node;
            cur->right->m_value = str;
            cur->right->left = NULL;
            cur->right->right = NULL;
            length++;
            //return;
        }
    }
    else if(str == cur->m_value)
    {
        return false;
        //cerr << "insert " << str << " failed. String already in tree." << endl;
    }
    
    return true;

}

bool Bst::find(string str, Node *cur)
{
    if(!cur)
        return false;
    
    if(str == cur->m_value)
    {
        return true;
    }
    else if(str > cur->m_value)
    {
        return find(str, cur->right);

    }
    else if(str < cur->m_value)
    {
        return find(str, cur->left);
    }

}

/*
void Bst::dftList(string str)
{
    Node *ptr = m_root;

    while(ptr->right != NULL)
    {
        ptr = ptr->right;
    
    }

    ptr->right = new Node;
    ptr->m_value = str;
    ptr->right->right = NULL:

}
*/

void Bst::print(vector <string> &str, Node *cur, int pos)
{

    //str.resize(length + 1);

    if(!cur)
    {
        return;
    }

    print(str, cur->left, pos); 
    
    str.push_back(cur->m_value);

    //cout << cur->m_value << endl;

    print(str, cur->right, pos);

}

void Bst::breadth(vector <string> &str, Node *cur, int pos)
{
    //str.resize(length);
    
    if(!cur)
    {
        return;
    }
    
    //cout << cur->m_value << endl;
    while(!cur)
    {
        if(cur->left != NULL)
        {
            //str.push_back(cur->left);
        }
        
        if(cur->right != NULL)
        {
            //str.push_back(cur->right);
        }
        


    }

    //print(str, cur->left, pos);

    //print(str, cur->right, pos);

    //str.push_back(cur->m_value);

}

void Bst::distance(Node *cur, int dist)
{
    if(!cur)
    {
        return;
    
    }
    
    total += dist;

    //cout << dist << " + ";

    distance(cur->right, dist + 1);
    distance(cur->left, dist + 1);
    
}

double Bst::distance()
{
    distance(m_root, dist);

    return total / length;
}

bool Bst::balanced(Node *cur, int mid)
{
    //mid = m_root->m_value;

    if(cur->left->m_value < m_root->m_value)
    {
        
    }

    
}

void Bst::rebalance()
{

}

//List--------------------------------------------------------------------

/*
void Bst::List()
{
    m_head = NULL;

}

void Bst::listInsert(string str)
{
    if(!m_head)
    {
        m_head = new item(str, m_head);
    }
    else
    {
        item *ptr = m_head;

        while(ptr->m_next != NULL)
        {
            ptr = ptr->m_next;
        }
        ptr->m_next = new item(str, ptr->m_next);
    }
}
*/
