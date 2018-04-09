//sim.cpp
//beck, Mitchell
//mbeck16

#include <iostream>
#include <string>
#include "cust.h"
#include "pqueue.h"

using namespace std;

string name = "";
string title = "";
int t = 0;
int items = 0;

Pqueue pq;

int main()
{
    while(cin.peek() != -1)
    {
        cin >> name;

        cin >> title;

        cin >> t;

        cin >> items;
        
        pq.enqueue(new Cust(name, title, t, items), t);

    }
    

    

}
