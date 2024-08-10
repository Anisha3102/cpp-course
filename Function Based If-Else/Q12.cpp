// Q12
// Implement a C++ function that takes a person's salary as an argument and returns the total tax after applying discounts based on the income using if-else statements.

#include <bits/stdc++.h>
using namespace std;

int taxAfterDiscount(int income)
{
    float tax;
    if (income > 50000)
    {
        tax = income * 15 / 100;
    }
    else if (income > 10000 && income <= 50000)
    {
        tax = income * 10 / 100;
    }
    else
    {
        tax = income * 5 / 100;
    }

    return tax;
}

int main()
{
    int k;
    cout << "Enter income : ";
    cin >> k;

    cout << "Total tax = " << taxAfterDiscount(k);

    return 0;
}
