// Q-2
// Create a C++ function that takes a temperature in Celsius as an argument and returns the corresponding category (Cold, Warm, Hot) using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string temperature(int temp)
{
    if (temp >= 30)
    {
        return "Hot";
    }
    else if (temp <= 16)
    {
        return "Cold";
    }
    else
    {
        return "Warm";
    }
}

int main()
{
    int k;
    cout << "Enter the temperature : ";
    cin >> k;

    cout << temperature(k);

    return 0;
}