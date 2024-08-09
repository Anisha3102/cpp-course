// Q-24
// Create a C++ function that takes a student's score and total possible score as arguments and returns their percentage and grade using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string grade(int sub1, int sub2, int sub3, int sub4, int sub5)
{
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    float percent = total / 5;

    if (percent > 90 && percent <= 100)
    {
        return "A";
    }
    else if (percent > 80 && percent <= 90)
    {
        return "B";
    }
    else if (percent > 70 && percent <= 80)
    {
        return "C";
    }
    else if (percent > 50 && percent <= 70)
    {
        return "D";
    }
    else if (percent > 30 && percent <= 50)
    {
        return "E";
    }
    else if (percent >= 0 && percent <= 30)
    {
        return "F";
    }
    else
    {
        return "INVALID";
    }
}

int main()
{
    int x1, x2, x3, x4, x5;
    cout << "Enter the Marks of subjects : ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    cout << grade(x1, x2, x3, x4, x5);

    return 0;
}