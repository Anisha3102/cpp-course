// Q-22
// Write a C++ function that takes an employee's years of service as an argument and returns their bonus percentage using if-else statements.

#include <bits/stdc++.h>
using namespace std;

int bonus(int experience)
{
    if (experience <= 3)
    {
        return 0;
    }
    else if (experience > 3 && experience <= 5)
    {
        return 5;
    }
    else if (experience > 5 && experience <= 10)
    {
        return 10;
    }
    else
    {
        return 15;
    }
}

int main()
{
    int k;
    cout << "Enter the Years : ";
    cin >> k;

    cout << bonus(k);

    return 0;
}