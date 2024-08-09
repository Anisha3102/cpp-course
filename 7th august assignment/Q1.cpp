// Q-1
// Write a C++ function that takes an integer as an argument and uses an if-else statement to determine whether the number is prime or not, then returns the result.

#include <bits/stdc++.h>
using namespace std;

string isPrime(int num)
{
    if (num <= 1)
    {
        return "INVALID";
    }

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
        return "Prime Number";
    }
    else
    {
        return "Not a Prime Number";
    }
}

int main()
{
    int k;
    cout << "Enter a Number : ";
    cin >> k;

    cout << isPrime(k);

    return 0;
}