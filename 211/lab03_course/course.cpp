#include <iostream>
#include "course.h"
#include <string>

using namespace std;

void Course::print()
{
    cout << dept << " " << number << " at " << time << endl;

}

Course::Course(string s, int n, int t)
{
    dept = s;
    number = n;
    time = t;


}
