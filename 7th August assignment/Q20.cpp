// Q-20
// Implement a C++ function that takes a student's attendance percentage as an argument and returns whether they are eligible for exams using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string isEligibe(int attendance)
{
    if (attendance <= 100 && attendance >= 75)
    {
        return "Eligible";
    }
    else if (attendance < 75 && attendance >= 0)
    {
        return "Not Eligible";
    }
    else
    {
        return "INVALID";
    }
}

int main()
{
    int k;
    cout << "Enter the Attendance Percentage : ";
    cin >> k;

    cout << isEligibe(k);

    return 0;
}