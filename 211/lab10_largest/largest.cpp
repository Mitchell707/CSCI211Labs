#include <iostream>
#include <assert.h>
using namespace std;

int x = 0;
int y = 0;

int largest_in_array(int values[], int size)
{
    assert(size > 0);
    
    //try writing the function spo it goes from the end of the values, rins the program then passes the value - (size - 1) and the size - 1

    

    //y + 2;
    
    if(*values > x)
    {
        cout << *values << endl;
        x = *values;
        return largest_in_array(values + 1, size);
    }
    else if(y != size - 1)
    {   
        
        return largest_in_array(values + 1, size);
    }
    
    if(y == size - 1)
    {
        return x;
    }

    //return 42; // replace this with the real code...

}

int main()
{

    int values[1000];
    int size = 0;
    cout << "Enter integers.  Type control-D when done\n";
    for (size = 0; cin >> values[size]; size++)
      ;
    cout << "The largest value is " << largest_in_array(values, size) << endl;
}
