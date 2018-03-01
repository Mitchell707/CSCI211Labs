#ifndef _COURSE_H_
#define _COURSE_H_

#include <iostream>
#include <string>

using namespace std;

class Course
{
  public:
    string dept;
    int number;
    int time;

    Course(string, int, int);
    
    void print();


};

#endif
