// Write a C++ function that takes the year as input and uses nested if-else statements to determine if it is a century year (ends with 00) and if it is a leap year.

#include <bits/stdc++.h>
using namespace std;

string checkYear(int year)
{
    if (year % 100 == 0)
    {
        if (year % 4 == 0)
        {
            return "It is a century as well as leap year";
        }
        else
        {
            return "It is a century year but not a leap year";
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            return "It is not a century but a leap year";
        }
        else
        {
            return "It is not a century as well as not a leap year";
        }
    }
}

int main()
{
    int k;
    cout << "Enter a Year : ";
    cin >> k;

    cout << checkYear(k);

    return 0;
}