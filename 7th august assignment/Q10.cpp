// Q-10
// Write a C++ function that takes a person's hourly wage and hours worked as arguments and returns their total pay, including overtime pay for hours worked over 40, using if-else statements.

#include <bits/stdc++.h>
using namespace std;

int payment(int wage, int hours)
{
    int salary = wage * hours;

    if (hours > 40)
    {
        salary = salary + (salary * 10 / 100);
    }

    return salary;
}

int main()
{
    int wage, hours;
    cout << "Enter hourly wage : ";
    cin >> wage;
    cout << "Enter working hours : ";
    cin >> hours;

    cout << payment(wage, hours);

    return 0;
}