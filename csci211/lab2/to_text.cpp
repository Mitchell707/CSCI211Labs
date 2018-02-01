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
        case '0' : cout << "zero" <<endl;
        break;
    
        case '1' : cout << "one" << endl;
        break;
        
        case '2' : cout << "two" << endl;
        break;
        
        case '3' : cout << "three" << endl;
        break;
        
        case '4' : cout << "four" << endl;
        break;
        
        case '5' : cout << "five" << endl;
        break;
        
        case '6' : cout << "six" << endl;
        break;

        case '7' : cout << "seven" << endl;
        break;

        case '8' : cout << "eight" << endl;
        break;

        case '9' : cout << "nine" << endl;
        break;
    
    }    
}
