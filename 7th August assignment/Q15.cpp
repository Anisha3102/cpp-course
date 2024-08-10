// Q-15
// Write a C++ function that takes the number of days a book is overdue and returns the fine using if-else statements.

#include <bits/stdc++.h>
using namespace std;

int fine(int days)
{
    if (days <= 0)
    {
        return 0;
    }
    else
    {
        return days * 20; // Per day fine is Rs.20
    }
}

int main()
{
    int k;
    cout << "Enter no. of days : ";
    cin >> k;

    cout << fine(k);

    return 0;
}