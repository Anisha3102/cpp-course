// Write a C++ function that takes an integer as input and uses nested if-else statements to determine if the number is divisible by 4, 5, or 6, and if it is also a prime number.

#include <bits/stdc++.h>
using namespace std;

string checkNum(int num)
{
    if (num % 4 == 0 || num % 5 == 0 || num % 6 == 0)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return "Number is divisible by 4, 5 or 6 and it is a prime number";
        }
        else
        {
            return "Number is divisible by 4, 5 or 6 and it is not a prime number";
        }
    }
    else
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return "Number is not divisible by 4, 5 or 6 and it is a prime number";
        }
        else
        {
            return "Number is not divisible by 4, 5 or 6 and it is not a prime number";
        }
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << checkNum(k);

    return 0;
}