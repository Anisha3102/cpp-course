// Q-5
// Create a C++ program that takes a floating - point number as input and prints whether it is positive, negative, or zero using if - else statements(without return, with argument).

#include <bits/stdc++.h>
using namespace std;

void PositiveNegative(float num)
{
    if (num > 0)
    {
        cout << "Positive";
    }
    else if (num < 0)
    {
        cout << "negative";
    }
    else
    {
        cout << "Zero";
    }
}

int main()
{
    float k;
    cout << "Enter a number : ";
    cin >> k;

    PositiveNegative(k);

    return 0;
}