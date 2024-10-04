// 4.A person runs N kilometers every day, but their speed decreases by 10% every day.
// Write a program that calculates how many days it will take for the person’s daily distance 
// to be less than K kilometers.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n, k;

    cout << "Enter n : ";
    cin >> n;

    cout << "Enter k : ";
    cin >> k;

    if (n < k)
    {
        cout << "INVALID INPUT";
        return 0;
    }

    int day = 0;

    while (n >= k)
    {
        n *= 0.9;
        day++;
    }

    cout << day <<" days";

    return 0;
}