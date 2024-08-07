// Q8...
// take input from user and check whether it is even or odd.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << x << " is Even";
    }
    else
    {
        cout << x << " is Odd";
    }

    return 0;
}
