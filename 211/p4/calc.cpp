//calc.cpp
//Beck, Mitchell
//mbeck16

#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "dstack.h"

using namespace std;

string input = "";
double value = 0;

int count = 0;

Dstack num;
Dstack opp;

double sum(double, double);
double dif(double, double);

double prod(double, double);
double div(double, double);

double pow(double, double);

int main()
{
    getline(cin, input);

    for(int i = 0; i < input.size(); i++)
    {
        if(isdigit(input[i]))
        {
            if(isdigit(input[i + 1]))
            {
                num.push(((input[i] - 48) * 10) + (input[i + 1] - 48));
                i++;
                //count++;
            }
            else if(input[i + 1] == '.')
            {
                if(isdigit(input[i + 2]))
                {
                    if(isdigit(input[i + 3]))
                    {
                        double temp = ((input[i] - 48) + ((input[i + 2] - 48) * .1) + (input[i + 3] - 48) * .01);
                        //cout << temp << endl;
                        num.push(temp);
                        i = i + 3;
                    }
                    else
                    {
                        num.push((((input[i] - 48) + (input[i + 2] - 48) * .1)));
                        i = i + 2;
                    }
                }
                else
                {
                    num.push(input[i] - 48);
                    i++;
                }
            }
            else
            {
                num.push(input[i] - 48);
                //count++;
            }
            //count++;

        }
        else if(input[i] == '.')
        {
            if(isdigit(input[i + 1]))
            {
                if(isdigit(input[i + 2]))
                {
                    double temp = (((input[i + 1] - 48) * .1) + (input[i + 2] - 48) * .01);
                    //cout << temp << endl;
                    num.push(temp);
                    i = i + 2;
                }
                else
                {
                    num.push((input[i + 1] - 48) * .1);
                    i++;
                }
            }
        }
        else
        {
            if(input[i] == '+')
            {
                num.push(sum(num.pop(), num.pop()));

            }
            else if(input[i] == '-')
            {
                num.push(dif(num.pop(), num.pop()));
            }
            else if(input[i] == '*')
            {
                num.push(prod(num.pop(), num.pop()));
            }
            else if(input[i] == '/')
            {

                num.push(div(num.pop(), num.pop()));
            }
            else if(input[i] == '^')
            {
                num.push(pow(num.pop(), num.pop()));
            }
        }
    }


    for(int i = 0; i < num.size(); i++)
    {
        cout << num.pop() << endl;   
        
    }
}



double sum(double a, double b)
{
    return a + b;
}

double dif(double a, double b)
{
    return a - b;
}

double prod(double a, double b)
{
    return a * b;
}

double div(double a, double b)
{
    return a/b;
}

double pow(double a, double b)
{
    
    double temp = a;
    
    if(b == 0)
    {
        return 1;
    }

    for(int i = 0; i < b - 1; i++)
    {
        a = temp * a;
    }

    return a;
}
