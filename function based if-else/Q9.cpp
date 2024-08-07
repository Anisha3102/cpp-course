// Q9
// Develop a C++ function that takes a string as an argument and returns whether it is a palindrome (reads the same backward as forward) using if-else statements.



#include <bits/stdc++.h>
using namespace std;

string palindrome(int k)
{
    int temp = k;
    int sum = 0;
    while (k > 0)
    {
        int rem = k % 10;
        sum = sum * 10 + rem;
        k = k / 10;
    }
    if (sum == temp)
    {
        return "palindrome";
    }
    else
    {
        return "not palindrome";
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << palindrome(k);

    return 0;
}

