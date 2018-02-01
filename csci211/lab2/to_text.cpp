#include <iostream>
#include <string>

using namespace std;

void toText(int);

char input;


int main()
{
    while(cin.peek() != -1)
    {
        cin >> input;
        toText(input);
        input = 'a';
    }
    
    return 0;
    
}

void toText(int c)
{
    //cout << c;
   
    switch(c)
    {
        case '0' : cout << "Zero" <<endl;
        break;
    
        case '1' : cout << "One" << endl;
        break;
        
        case '2' : cout << "Two" << endl;
        break;
        
        case '3' : cout << "Three" << endl;
        break;
        
        case '4' : cout << "Four" << endl;
        break;
        
        case '5' : cout << "Five" << endl;
        break;
        
        case '6' : cout << "Six" << endl;
        break;

        case '7' : cout << "Seven" << endl;
        break;

        case '8' : cout << "Eight" << endl;
        break;

        case '9' : cout << "Nine" << endl;
        break;
    
    }    
}
