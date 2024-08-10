// Q10
// Write a C++ function that takes age and time of day as arguments and returns the ticket price for a movie after applying discounts for children and seniors using if-else statements.



#include <bits/stdc++.h>
using namespace std;

int costAfterDiscount(int age)
{
    float cost = 200; // Cost of 1 ticket is 200
    if (age > 60 || age < 10)
    {
        cost = cost - (cost * 10 / 100);
    }

    return cost;
}

int main()
{
    int k;
    cout << "Enter age : ";
    cin >> k;

    cout << "Total cost = " << costAfterDiscount(k);

    return 0;
}
