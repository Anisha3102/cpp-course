// Q-13
// Implement a C++ function that takes a person's income as an argument and returns their tax bracket using if-else statements.

#include <bits/stdc++.h>
using namespace std;

float showTax(int income)
{
    if (income > 50000)
    {
        return income * 15 / 100;
    }
    else if (income <= 50000 && income > 10000)
    {
        return income * 10 / 100;
    }
    else
    {
        return income * 5 / 100;
    }
}

int main()
{
    int k;
    cout << "Enter the income : ";
    cin >> k;

    cout << showTax(k);

    return 0;
}