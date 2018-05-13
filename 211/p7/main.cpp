//main.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <string>
#include "bst.h"

using namespace std;

string command = "";
string temp = "";

Bst tree;
Bst dft;

string echo(string);

int main()
{
    while (cin >> command)
    {
        if(command == "echo")
        {
            cin.ignore();
            getline(cin, temp);
            cout << temp << endl;
        }
        else if(command == "insert")
        {
            cin.ignore();
            getline(cin, temp);
            if(!tree.insert(temp))
            {
                cerr << "insert <" << temp << "> failed. String already in tree.\n";
            }
            //cout << "Done" << endl;
        }
        else if(command == "size")
        {
            cout << tree.size() << endl;
        }
        else if(command == "find")
        {
            cin.ignore();
            getline(cin, temp);
            if(tree.find(temp) == true)
            {
                cout << temp << " is in tree.\n";
            }
            else
            {
                cout << temp << " is not in tree.\n";
            }
        }
        else if(command == "print")
        {   
            tree.print();
            
            cout << "{";

            for(int i = 0; i < tree.size() - 1;)
            {
                cout << tree.strings[i++] << ", ";
            }

            cout <<tree.strings[tree.size() - 1] << "}" << endl;

            tree.strings.clear();
            
        }
        else if(command == "breadth")
        {
           tree.breadth();
           
           
           cout << "{";

           for(int i = 0; i < tree.size() - 1;)
           {
                cout << tree.strings[i++] << ", ";
           }    

           cout << tree.strings[tree.size() - 1] << "}" << endl;

           tree.strings.clear();
           

        }
        else if(command == "distance")
        {
            cout << "Average distance of nodes to root = " << tree.distance() << endl;
        }
        else if(command == "balanced")
        {
            //Tree is balanced if the height of the shallowist node and the deepest node has a difference of 0 or 1
        }
        else if(command == "rebalance")
        {
            //Use a queue(vector) to print the children level by level going down from left to right.
        }
        else
        {
            cerr << "Illegal command <" << command << ">.\n";
        }

    }
}

string echo(string str)
{
    cout << str << endl;

}
