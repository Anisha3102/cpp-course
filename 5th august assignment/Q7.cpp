// Q7...
// take an input from user and check whether it is positive negative or 0.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;

    if (x > 0)
    {
        cout << x << " is Positive";
    }
    else if (x < 0)
    {
        cout << x << " is Negative";
    }
    else
    {
        cout << x << " -  zero";
    }

    return 0;
}

