// Write a C++ function that takes an integer as input and uses nested if-else statements to determine if the number is a strong number (sum of factorials of digits equals the number) or not.

#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int prod = 1;

    if (num == 0)
    {
        return prod;
    }

    for (int i = 1; i <= num; i++)
    {
        prod = prod * i;
    }

    return prod;
}

string isStrongNumber(int num)
{
    if (num > 0)
    {
        int sum = 0;
        int temp = num;

        while (temp > 0)
        {
            int rem = temp % 10;
            sum = sum + factorial(rem);
            temp = temp / 10;
        }

        if (sum == num)
        {
            return "Strong number";
        }
        else
        {
            return "Not a Strong number";
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
    cout << "Enter two numbers : ";
    cin >> k;

    cout << isStrongNumber(k);

    return 0;
}