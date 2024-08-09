// Q-6
// Write a C++ function that takes two numbers as arguments and returns whether they are equal, or which one is larger using if-else statements and relational operators.

#include <bits/stdc++.h>
using namespace std;

int Greater(int num1, int num2)
{
    if (num1 == num2)
    {
        return INT_MIN;
    }
    else if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int x1, x2;
    cout << "Enter two numbers : ";
    cin >> x1 >> x2;

    if (Greater(x1, x2) == INT_MIN)
    {
        cout << "Both are equal";
    }
    else
    {
        cout << Greater(x1, x2);
    }

    return 0;
}