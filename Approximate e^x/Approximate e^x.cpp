// This program will approximate e^x

#include <iostream>
using namespace std;

int main()
{
    //x = input value
    //y = radical
    //z = denominator
    double result = 0, x, y = 1, z = 1;

    cout << "This program will approximate e^x\n";
    cout << "(Euler\'" << "s Number raised to the power of x)\n\n";

    cout << "Enter a value for x: ";
    cin >> x;

    while (y<6)
    {
        //This loop will increment the radical by 1 and the denominator by
        //the product of the next radical and the current denominator

        result += pow (x, y) / z;
        y++;
        z *= y;
    }

    result += 1;

    cout << "\nThe result is " << result << "\n";
}