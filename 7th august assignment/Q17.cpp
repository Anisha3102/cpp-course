// Q-17
// Develop a C++ function that takes an integer as an argument and returns whether it is a perfect square using logical operators.

#include <bits/stdc++.h>
using namespace std;

string isPerfectSquare(int num)
{
    if (num < 0)
    {
        return "No";
    }

    int low = 1;
    int high = num;

    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        int square = mid * mid;

        if (square == num)
        {
            return "Yes";
        }

        if (square < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return "No";
}

int main()
{
    int k;
    cout << "Enter a Number : ";
    cin >> k;

    cout << isPerfectSquare(k);

    return 0;
}