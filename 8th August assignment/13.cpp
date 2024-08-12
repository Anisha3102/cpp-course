// Write a C++ function that takes two integers as input and uses nested if-else statements to determine if the first is a multiple of the second, and if the second is a multiple of the first.

#include <bits/stdc++.h>
using namespace std;

string isMultiple(int a, int b)
{
    if (a % b == 0)
    {
        if (b % a == 0)
        {
            return "a is multiple of b, and b is multiple of a";
        }
        else
        {
            return "a is multiple of b, and b is not multiple of a";
        }
    }
    else
    {
        if (b % a == 0)
        {
            return "a is not multiple of b, and b is multiple of a";
        }
        else
        {
            return "a is not multiple of b, and b is not multiple of a";
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << isMultiple(a, b);

    return 0;
}