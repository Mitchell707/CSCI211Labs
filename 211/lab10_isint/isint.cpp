#include <iostream>
#include <ctype.h>
#include <assert.h>
using namespace std;

bool is_int(char str[])
{
    
    if(isdigit(*str))
    {
        return is_int(str + 1);
    }
    else if(*str == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char buf[1000];
    cout << "Enter a string: ";
    cin >> buf;

    if (is_int(buf))
      cout << "<" << buf << "> is an integer.\n";
    else cout << "<" << buf << "> is NOT an integer.\n";
}
