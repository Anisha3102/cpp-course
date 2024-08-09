// Q-17
// Develop a C++ function that takes an integer as an argument and returns whether it is a perfect square using logical operators.

#include <bits/stdc++.h>
using namespace std;

string isPerfectSquare(int num)
{
    for (int i = 0; i <= num; i++)
    {
        if (i * i == num)
        {https://www.onlinegdb.com/#tab-stdin
            return "Perfect square";
        }
    }
    return "Not a  perfect square";
}

int main()
{
    int k;
    cout << "Enter a Number : ";
    cin >> k;

    cout << isPerfectSquare(k);

    return 0;
}
