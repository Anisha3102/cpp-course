// Q21
// Develop a C++ function that takes a character as an argument and returns its category (uppercase letter, lowercase letter, digit, or special character) using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string type(char k)
{
    if (isupper(k))
    {
        return "Uppercase letter";
    }
    else if (islower(k))
    {
        return "Lowercase letter";
    }
    else if (isdigit(k))
    {
        return "Digit";
    }
    else
    {
        return "Special character";
    }
}

int main()
{
    char k;

    cout << "Enter a character: ";
    cin >> k;

    cout << k << " is a " << type(k);

    return 0;
}