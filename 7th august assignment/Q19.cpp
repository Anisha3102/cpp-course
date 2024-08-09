// Q-19
// Write a C++ function that takes a temperature in Fahrenheit as an argument and returns its equivalent in Celsius, with additional messages if it is freezing or boiling using if-else statements.

#include <bits/stdc++.h>
using namespace std;

float FahrenheitToCelcius(int giventemp)
{
    float temp = (giventemp - 32) / 1.8;
    if (temp <= 0)
    {
        cout << "Frezing" << endl;
    }
    else if (temp >= 100)
    {
        cout << "Boiling" << endl;
    }
    return temp;
}

int main()
{
    int k;
    cout << "Enter the Temp in farh: ";
    cin >> k;

    cout << FahrenheitToCelcius(k);

    return 0;
}