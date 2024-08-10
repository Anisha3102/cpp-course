// Q13
// Write a C++ function that takes a number as an argument and returns whether it is a power of two using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string Powerof2(int k)
{
    if (ceil(log2(k)) == floor(log2(k)))
    {
        return "Yes, Power of 2";
    }
    else
    {
        return "Not a Power of 2";
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << Powerof2(k);

    return 0;
}