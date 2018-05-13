//bst.h
//Beck, Mitchell
//mbeck16

#ifndef _BST_H_
#define _BST_H_

#include <iostream>
#include <string>
#include <vector>
#include "bst.h"

using namespace std;

class Bst
{
    public: 
        Bst();
        ~Bst();
        int size() {return length;};
        double distance();
        bool balanced() {return balanced(m_root, mid);}
        void rebalance();
        
        void breadth() {return breadth(strings, m_root, pos);}
        void print() {return print(strings, m_root, pos);}
        bool find(string str) {return find(str, m_root);}
        bool insert(string str) {return insert(str, m_root);}

        vector <string> strings;
    
    private:    

        struct Node
        {
            public:
                //Node(string cur, Node *right, Node *left)
                    //{m_value = cur; m_right = right; m_left = left;}
                    string m_value;
                    Node *right = NULL;
                    Node *left = NULL;
        };
        
        bool insert(string str, Node *cur);
        bool find(string str, Node *cur);
        void print(vector <string> &, Node *cur, int);
        void breadth(vector <string> &, Node *cur, int);
        void distance(Node *cur, int);
        bool balanced(Node *cur, int);

        Node *m_root; 
       
        int mid;
        int pos;
        int length;
        double dist;
        double total;

//LIST______________________________________________________________________________
        
        /*
    
    public:
        List();
        void listInsert(string str);
        
    private:
        struct item
        {   
            public:
                //item(string *str, item *next)
                //{m_value = str; m_next = next;}
                string *m_value;
                item *m_next;

        };
        
        item *m_head;
        int m_length;

        */

};

#endif
