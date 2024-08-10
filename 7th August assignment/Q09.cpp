// Q-9
// Develop a C++ function that takes a string as an argument and returns whether it contains only digits using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string OnlyDigits(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;

    cout << OnlyDigits(str);

    return 0;
}