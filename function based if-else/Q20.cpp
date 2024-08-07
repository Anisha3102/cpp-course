// Q16
// Develop a C++ function that takes an integer as an argument and returns whether it is divisible by both 3 and 5 using logical operators.

#include <bits/stdc++.h>
using namespace std;

string divisibleBy3And5(int k)
{
    if (k % 3 == 0 && k % 5 == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << divisibleBy3And5(k);

    return 0;
}