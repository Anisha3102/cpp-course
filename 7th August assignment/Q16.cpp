// Q-16
// Create a C++ function that takes a student's score as an argument and returns whether the score is in the top 10% using logical operators.

#include <bits/stdc++.h>
using namespace std;

string isTop10(int score)
{
    if (score > 90 && score <= 100)
    {
        return "Yes, Top 10%";
    }
    else
    {
        return "Not in Top 10%";
    }
}

int main()
{
    int k;
    cout << "Enter the score : ";
    cin >> k;

    cout << isTop10(k);

    return 0;
}