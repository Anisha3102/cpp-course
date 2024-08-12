// Write a C++ function that takes an integer as input and uses nested if-else statements to determine if the number is a perfect cube or not.

#include <bits/stdc++.h>
using namespace std;

string isCube(int num)
{
    if (num == 0)
    {
        return "is a Perfect cube";
    }
    else if (num > 0)
    {
        for (int i = 1; i <= num; i++)
        {
            if (i * i * i == num)
            {
                return "is a Perfect cube";
            }
        }
    }
    else
    {
        for (int i = -1; i >= num; i--)
        {
            if (i * i * i == num)
            {
                return "is a Perfect cube";
            }
        }
    }

    return "is not a Perfect cube";
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << isCube(k);

    return 0;
}