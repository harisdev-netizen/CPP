#include <iostream>
#include <cmath> //cmath is used for mathematical use
using namespace std;

int main()
{
    int base, exponent; //passing variables
    cout << "What is the base?: ";
    cin >> base; //asking user for base value
    cout << "What is the exponent?: ";
    cin >> exponent;                    //asking user for ecponent value
    double power = pow(base, exponent); //using variable double
    cout << power << endl;

    return 0;
}