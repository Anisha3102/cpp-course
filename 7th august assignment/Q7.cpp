// Q-7
// Create a C++ function that takes a character as an argument and returns whether it is an uppercase letter or not using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string isUppercase(char c)
{
    if (isupper(c))
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
    char k;
    cout << "Enter a alphabet : ";
    cin >> k;

    cout << isUppercase(k);

    return 0;
}