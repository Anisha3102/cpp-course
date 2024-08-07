// Q18
// Write a C++ function that takes a credit score as an argument and returns its category ("Excellent," "Good," "Fair," "Poor") using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string ExcellentGoodFairPoor(int k)
{
    if ((k >= 0 && k <= 100) && (k >= 90))
    {
        return "Excellent";
    }
    else if ((k >= 0 && k <= 100) && (k >= 60 && k < 90))
    {
        return "Good";
    }
    else if ((k >= 0 && k <= 100) && (k >= 30 && k < 60))
    {
        return "Fair";
    }
    else if ((k >= 0 && k <= 100) && (k >= 0 && k < 30))
    {
        return "Poor";
    }
    else
    {
        return "Invalid marks";
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << ExcellentGoodFairPoor(k);

    return 0;
}