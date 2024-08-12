// Write a C++ function that takes the marks of a student in three subjects as input and uses nested if-else statements to determine if the student passed all subjects, passed any one subject, or failed.

#include <bits/stdc++.h>
using namespace std;

string PassOrFail(int a, int b, int c)
{
    if (a > 33)
    {
        if (b > 33)
        {
            if (c > 33)
            {
                return "Pass in all subject";
            }
            else
            {
                return "Pass in Physics and Chemistry";
            }
        }
        else
        {
            if (c > 33)
            {
                return "Pass Physics and Maths";
            }
            else
            {
                return "Pass in Physics only";
            }
        }
    }
    else
    {
        if (b > 33)
        {
            if (c > 33)
            {
                return "Pass in Chemistry and Maths";
            }
            else
            {
                return "Pass in Chemistry only";
            }
        }
        else
        {
            if (c > 33)
            {
                return "Pass in Maths only";
            }
            else
            {
                return "Fail in all subjects";
            }
        }
    }
}

int main()
{
    int a, b, c;
    cout << "Enter the marks of Physics, Chemistry, and Maths respectively : ";
    cin >> a >> b >> c;

    cout << PassOrFail(a, b, c);

    return 0;
}