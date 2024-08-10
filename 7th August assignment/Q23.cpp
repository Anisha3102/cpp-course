// Q-23
// Develop a C++ function that takes a temperature in Celsius as an argument and returns the state of water(solid, liquid, gas) at that temperature using if - else statements.

#include <bits/stdc++.h>
using namespace std;

string waterState(int temp)
{
    if (temp > 0 && temp < 100)
    {
        return "Liquid";
    }
    else if (temp <= 0)
    {
        return "Solid";
    }
    else
    {
        return "Gas";
    }
}

int main()
{
    int k;
    cout << "Enter the Temp : ";
    cin >> k;

    cout << waterState(k);

    return 0;
}