// Write a C++ function that takes a character as input and uses nested if-else statements to determine if it is a vowel and if it is uppercase or lowercase, or if it is a consonant.

#include <bits/stdc++.h>
using namespace std;

string charCategory(char c)
{
    if (isalpha(c))
    {
        if (c >= 'A' && c <= 'Z')
        {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                return "Uppercase Vowel";
            }
            else
            {
                return "Uppercase Consonant";
            }
        }
        else
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                return "Lowercase Vowel";
            }
            else
            {
                return "Lowercase Consonant";
            }
        }
    }
    else
    {
        return "Not an alphabet";
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