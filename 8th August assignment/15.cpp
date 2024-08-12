// Write a C++ function that takes a character as input and uses nested if-else statements to determine if it is a letter and if it is a vowel or consonant, or if it is a digit.

#include <bits/stdc++.h>
using namespace std;

string charCategory(char c)
{
    if (isalpha(c))
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            return "Vowel";
        }
        else
        {
            return "Consonant";
        }
    }
    else if (isdigit(c))
    {
        return "Digit";
    }
    else
    {
        return "Special Character";
    }
}

int main()
{
    char c;
    cout << "Enter a character : ";
    cin >> c;

    cout << charCategory(c);

    return 0;
}