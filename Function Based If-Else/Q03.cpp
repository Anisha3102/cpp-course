//Q3
// Write a C++ function that takes a year as an argument and returns whether it is a leap year or not using an if-else statement and logical operators.


#include <bits/stdc++.h>
using namespace std;

string checkLeapYear(int k)
{
    if (k % 4 == 0)
    {
        return "Leap year";
    }
    else
    {
        return "Not a Leap year";
    }
}

int main()
{
    int k;
    cout << "Enter a year : ";
    cin >> k;

    cout << checkLeapYear(k);

    return 0;
}
