// Q19
// Implement a C++ function that takes a student's grades as arguments and returns whether the student is eligible for a scholarship using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string isEligible(int k)
{

    if (k >= 95)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int k;
    cout << "Enter your marks : ";
    cin >> k;

    cout << isEligible(k);

    return 0;
}