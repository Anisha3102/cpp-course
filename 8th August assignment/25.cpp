// Write a C++ function that takes an integer as input and uses nested if-else statements to determine if the number is a palindrome and if the sum of its digits is also a palindrome.

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

string mainfunc(int num)
{
    int temp = num;
    int sum = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    if (isPalindrome(num))
    {
        if (isPalindrome(sum))
        {
            return "Number is palindrome and sum of digits of number is also palindrome";
        }
        else
        {
            return "Number is palindrome but sum of digits of number is not palindrome";
        }
    }
    else
    {
        if (isPalindrome(sum))
        {
            return "Number is not  palindrome but sum of digits of number is palindrome";
        }
        else
        {
            return "Number is not palindrome and sum of digits of number is also not palindrome";
        }
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << mainfunc(k);

    return 0;
}