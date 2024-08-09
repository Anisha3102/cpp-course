// Q-18
// Develop a C++ function that takes the quantity of items purchased as an argument and returns the total cost after applying a discount based on the quantity using if-else statements.

#include <bits/stdc++.h>
using namespace std;

float discount(int qty)
{
    int cost = qty * 100;
    int discount = 0;

    if (qty > 5 && qty <= 10)
    {
        discount = 5;
    }
    else if (qty > 10)
    {
        discount = 10;
    }

    float discountCost = cost - (cost * discount / 100);

    return discountCost;
}

int main()
{
    int k;
    cout << "Enter the Quantity : ";
    cin >> k;

    cout << discount(k);

    return 0;
}