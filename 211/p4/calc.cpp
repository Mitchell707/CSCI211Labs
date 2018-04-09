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

string temp = "";
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

    for(int i = 0; i < input.size(); i++)//Runs through the whole input
    {
        if(isdigit(input[i]))//Checks if the current char is a digit
        {
            if(isdigit(input[i + 1]))//checks if the digit has at least two digits
            {
                if(input[i + 2] == '.')//checks if the two digit number has a decimal
                {
                    if(isdigit(input[i + 3]))//Check if the digit after the decimal is a digit
                    {
                        if(isdigit(input[i + 4]))//Checks if the second character after the decimal is a digit
                        {
                            double temp = ((input[i] - 48) * 10) + (input[i + 1] - 48) + ((input[i + 3] - 48) * .1) + ((input[i + 4] - 48) * .01);//Math will multiply the digits accordingly to make the correct number with a two digit number and two decimal places.
                            num.push(temp);
                            i = i + 4;// adds the correct number to i to adjust the indexing
                        }
                        else
                        {
                            num.push(((input[i] - 48) * 10) + (input[i + 1] - 48) + ((input[i + 3] - 48) * .1));//Math adjust the string to a two digit number with one decimal.
                            i = i + 3;//adds the correct number to i to adjust the indexing
                        }
                    }
                    else
                    {
                        num.push(((input[i] - 48) * 10) + (input[i + 1] - 48));//converts the string to a two digit number
                        i = i + 2; 
                    }
                }
                else if(isdigit(input[i + 2]))//checks for a three digit number
                {
                        num.push(((input[i] - 48) * 100) + ((input[i + 1] - 48) * 10) + (input[i + 2] - 48));//three character digit to a three digit number
                        i = i + 3;
                }
                else
                {
                   num.push(((input[i] - 48) * 10) + (input[i + 1] - 48));
                   i++;
                    //count++;
                }
            }
            else if(input[i + 1] == '.')//checks if the second character is a decimal
            {
                if(isdigit(input[i + 2]))//checks the first character after the decimal
                {
                    if(isdigit(input[i + 3]))//checks the second character after the decimal
                    {
                        double temp = ((input[i] - 48) + ((input[i + 2] - 48) * .1) + (input[i + 3] - 48) * .01);//turns the characters into a double with one whole number and two decimal numbers
                        num.push(temp);
                        i = i + 3;
                    }
                    else
                    {
                        num.push((((input[i] - 48) + (input[i + 2] - 48) * .1)));//turns the characters into a double with one whole number and one decimal place
                        i = i + 2;
                    }
                }
                else
                {
                    num.push(input[i] - 48);//converts one character into a digit if there is no digit after the decimal place
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
        else if(input[i] == '.')//Checks if the first character is a decimal
        {
            if(isdigit(input[i + 1]))//Checks if the first character after the decimal is a digit
            {
                if(isdigit(input[i + 2]))//checks if the second character after the decimal is a digit.
                {
                    double temp = (((input[i + 1] - 48) * .1) + (input[i + 2] - 48) * .01);//converts the characters into a two decimal place digit
                    //cout << temp << endl;
                    num.push(temp);
                    i = i + 2;
                }
                else
                {
                    num.push((input[i + 1] - 48) * .1);//makes a one decimal place double
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

    if(num.size() > 1)//if there is more than one digit in the stack it will return an error
    {
        cerr << "Error: Invalid expression." << endl;
        return 1;
    }
    else
    {
        cout << num.pop() << endl;//pops the last number in the stack
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
    
    if(b == 0)//makes sure anything to the 0 power is 1
    {
        return 1;
    }

    for(int i = 0; i < b - 1; i++)
    {
        a = temp * a;//multiplies the original number "a" by the new "a" and sets it to a new "a" for each i for b-1
    }

    return a;
}
