#include <iostream>
#include <cmath>

using namespace std;

// function serves as its own intity & in the calling we can pass whatever we want

double power(double base, int exponent) //declaring & defining
{
    // algorithm for calculating power

    double result = 1; //declaring double variable
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}

// double power(double, int); //declaration of a function //without declaration of a function on the top the definition on the bototm won't work!

int main()
{
    int base, exponent;
    cout << "What is the base value?: ";
    cin >> base;
    cout << "What is the exponent value?: ";
    cin >> exponent;
    double myPower = power(base, exponent); //calling our own function
    cout << myPower;                        //printint the function
}

// double power(double base, int exponent) //definition of a function
// {
//     return 0.0;
// }