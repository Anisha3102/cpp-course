// Q15
// Create a C++ function that takes a student's score as an argument and returns whether the score is valid (between 0 and 100) and whether the student passed (score >= 50) or failed using logical operators.

#include <bits/stdc++.h>
using namespace std;

string PassOrFail(int k)
{
    if (k >= 0 && k <= 100)
    {
        if (k >= 50)
        {
            return "Pass";
        }
        else
        {
            return "Fail";
        }
    }
    else
    {
        return "Invalid marks";
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << PassOrFail(k);

    return 0;
}