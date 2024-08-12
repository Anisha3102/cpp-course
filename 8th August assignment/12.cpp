// Write a C++ function that takes a single digit as input and
// uses nested if-else statements to determine if it is even or odd and if it is prime or not.

#include <bits/stdc++.h>
using namespace std;

string checkNum(int num)
{
    if (num > 0 && num < 10)
    {
        int count = 0;
        if (num % 2 == 0)
        {
            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                return "Even and Prime";
            }
            else
            {
                return "Even but not Prime";
            }
        }
        else
        {
            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                return "Odd and Prime";
            }
            else
            {
                return "Odd but not Prime";
            }
        }
    }
    else
    {
        return "Invalid Input";
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