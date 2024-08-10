// Q-11
// Develop a C++ function that takes a character as an argument and returns its ASCII value category (digit, uppercase letter, lowercase letter, special character) using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string ASCIICategory(char c)
{
    if (c >= '0' && c <= '9')
    {
        return "digit";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return "uppercase letter";
    }
    else if (c >= 'a' && c <= 'z')
    {
        return "lowercase letter";
    }
    else
    {
        return "special character";
    }
}

int main()
{
    char k;
    cout << "Enter a character : ";
    cin >> k;

    cout << ASCIICategory(k);

    return 0;
}