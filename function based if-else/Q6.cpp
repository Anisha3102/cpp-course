// Q6
// Write a C++ function that takes three numbers as arguments and returns the largest one using if-else statements and relational operators.


#include <bits/stdc++.h>
using namespace std;

int largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter the numbers ";
    cin >> a >> b >> c;

    cout << largest(a, b, c) << " is largest";

    return 0;
}

