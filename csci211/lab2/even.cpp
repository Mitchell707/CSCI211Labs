#include <iostream>
#include <string>

using namespace std;

int toInt(int);

string input;


int main()
{
    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        if(toInt(input[i]) % 2 != 0)
        {  
            //cout << toInt(input[i]) << endl;
            cout << "not all even" << endl;
            return 1;
        }

        //input = 'a';
    }
    
    cout << "all even" << endl;
    return 0;
    
}

int toInt(int c)
{
    //cout << c;
   
    switch(c)
    {
        case '0' : return 0;
        break;
    
        case '1' : return 1;
        break;
        
        case '2' : return 2;
        break;
        
        case '3' : return 3;
        break;
        
        case '4' : return 4;
        break;
        
        case '5' : return 5;
        break;
        
        case '6' : return 6;
        break;

        case '7' : return 7;
        break;

        case '8' : return 8;
        break;

        case '9' : return 9;
        break;
        
        default : return 1;
        break;
        //return -1;
    
    }    
}
