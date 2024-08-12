// Write a C++ function that takes an integer as input and uses nested if-else statements to determine if the number is prime and if it is less than a specific value.

#include <bits/stdc++.h>
using namespace std;

string checkPrime(int num, int target)
{
    if (num < target)
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
            return "Number is Prime and less than the target;";
        }
        else
        {
            return "Number is not Prime but less than the target;";
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
            return "Number is Prime but not less than the target;";
        }
        else
        {
            return "Number is not Prime and not less than the target;";
        }
    }
}

int main()
{
    int k, target;
    cout << "Enter a number : ";
    cin >> k;
    cout << "Enter the target : ";
    cin >> target;

    cout << checkPrime(k, target);

    return 0;
}