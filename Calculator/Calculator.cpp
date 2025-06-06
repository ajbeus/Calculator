#include "Calculator.h"
#include <iostream>
using namespace std;

double Calculator::CalculateNumbers(double x, char oper, double y)
{
    switch (oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y != 0) 
                return x / y;
            else {
                cout << "Error: Division by zero" << endl;
                return NAN;
            }
        case '^':
            return pow(x, y);
        default:
            cout << "Please enter a valid operator." << endl;
            return NAN;
    }
}
