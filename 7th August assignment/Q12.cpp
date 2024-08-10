// Q-12
// Implement a C++ function that takes the number of hours a car is parked as an argument and returns the parking fee based on hourly rates using if-else statements.

#include <bits/stdc++.h>
using namespace std;

float parkingFee(int hours)
{
    int rate;

    if (hours > 24)
    {
        rate = 200;
    }
    else if (hours <= 24 && hours > 12)
    {
        rate = 100;
    }
    else
    {
        rate = 50;
    }

    return hours * rate;
}

int main()
{
    int k;
    cout << "Enter parking hours : ";
    cin >> k;

    cout << parkingFee(k);

    return 0;
}