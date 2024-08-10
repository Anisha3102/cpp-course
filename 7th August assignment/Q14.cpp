// Q-14
// Write a C++ function that takes a number as an argument and returns whether it is a Fibonacci number or not using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string isFibonacci(int num)
{
    if (num < 0)
    {
        return "No";
    }

    if (num == 0 || num == 1)
    {
        return "Yes";
    }

    int x = 0, y = 1, z = 1;
    while (z < num)
    {
        x = y;
        y = z;
        z = x + y;
        if (z == num)
        {
            return "Yes";
        }
    }

    return "No";
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << isFibonacci(k);

    return 0;
}