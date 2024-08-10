// Q17
// Develop a C++ function that takes the quantity of books as an argument and returns the total cost after applying a discount of 10% if the quantity is between 5 and 10, and 20% if the quantity is more than 10.

#include <bits/stdc++.h>
using namespace std;

int costAfterDiscount(int k)
{
    float cost = k * 100; // Cost of 1 book is 100
    if (k >= 5 && k <= 10)
    {
        cost = cost - (cost * 10 / 100);
    }
    else if (k > 10)
    {
        cost = cost - (cost * 20 / 100);
    }

    return cost;
}

int main()
{
    int k;
    cout << "Enter the no. of books : ";
    cin >> k;

    cout << "Total cost = " << costAfterDiscount(k);

    return 0;
}
