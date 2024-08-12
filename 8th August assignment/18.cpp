// Write a C++ function that takes a four-digit number as input and uses nested if-else statements to determine if it is a palindrome and if its digits form an arithmetic progression.

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    int temp = num;
    int sum = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }

    if (sum == num)
    {
        return true;
    }

    return false;
}

bool isArithmetic(int num)
{
    int a, b, c, d;
    int temp = num;

    a = temp % 10;
    temp = temp / 10;

    b = temp % 10;
    temp = temp / 10;

    c = temp % 10;
    temp = temp / 10;

    d = temp % 10;

    if (d - c == c - b && c - b == b - a)
    {
        return true;
    }

    return false;
}

string mainfunc(int num)
{
    if (num <= 9999 && num >= 1000)
    {
        if (isPalindrome(num))
        {
            if (isArithmetic(num))
            {
                return "Number is palindrome and digits are in AP";
            }
            else
            {
                return "Number is palindrome but digits are not in AP";
            }
        }
        else
        {
            if (isArithmetic(num))
            {
                return "Number is not palindrome but digits are in AP";
            }
            else
            {
                return "Number is not palindrome and digits are not in AP";
            }
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
    cout << "Enter a 4-digit number : ";
    cin >> k;

    cout << mainfunc(k);

    return 0;
}