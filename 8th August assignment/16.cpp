// Write a C++ function that takes two integers as input and uses nested if-else statements to determine if their sum is even or odd, and if it is greater than a specific number.

#include <bits/stdc++.h>
using namespace std;

string checkSum(int a, int b, int target)
{
    int sum = a + b;
    if (sum % 2 == 0)
    {
        if (sum > target)
        {
            return "Sum is even and greater than target";
        }
        else
        {
            return "Sum is even and not greater than target";
        }
    }
    else
    {
        if (sum > target)
        {
            return "Sum is odd and greater than target";
        }
        else
        {
            return "Sum is odd and not greater than target";
        }
    }
}

int main()
{
    int a, b, target;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Enter the target : ";
    cin >> target;

    cout << checkSum(a, b, target);

    return 0;
}