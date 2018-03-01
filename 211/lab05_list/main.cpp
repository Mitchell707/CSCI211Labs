#include <iostream>
using namespace std;
#include <string>
#include "list.h"

string input = "1";

int main()
{
    // instantiate a List class (the constructor takes NO arguments)
    List list;

    // NOTE:
    // List list();  is incorrect, when there are no arguments don't use ()
    
   /* while(cin.peek() != -1)
    {
        getline(cin, input);
    
    }*/
    int in;
    while(cin >> in){
        list.insert_at_end(in);
    }

    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] != ' ')
        {
        /*
            if(input[i + 1] != ' ' || input[i + 1] != -1)
            {
                list.insert_at_end(((input[i] - 48) * 10) + (input[i + 1] - 48));
                i++;

            }
            else
            {
            */
               // list.insert_at_end(input[i] - 48);
            
            
        }
    }

    list.print();
    cout << "sum = " << list.sum() << endl;
/*
    // insert numbers into the list
    list.print();
    list.insert(1);
    list.print();
    list.insert(2);
    list.print();
    list.insert(3);
    list.print();
*/

    return 0;
}
