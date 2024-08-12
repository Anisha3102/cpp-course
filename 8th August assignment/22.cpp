// Write a C++ function that takes an integer as input and uses nested if-else statements to determine if the number is a perfect number (sum of divisors equals the number) or not.

#include <bits/stdc++.h>
using namespace std;

string isPerfectNumber(int num)
{
    if (num > 1)
    {
        int sum = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (num == sum)
        {
            return "Strong number";
        }
        else
        {
            return "Not a strong number";
        }
    }
    else
    {
        return "INVALID INPUT";
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << isPerfectNumber(k);

    return 0;
}