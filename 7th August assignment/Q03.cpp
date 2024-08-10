// Q-3
// Write a C++ function that takes a month as an argument and returns whether it has 30 days, 31 days, or 28/29 days using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string getDaysInMonth(string month) {
    if (month == "January" || month == "March" || month == "May" || month == "July" || 
        month == "August" || month == "October" || month == "December") {
        return "31 days";
    } else if (month == "April" || month == "June" || month == "September" || month == "November") {
        return "30 days";
    } else if (month == "February") {
        return "28/29 days";
    } else {
        return "Invalid month";
    }
}

int main()
{
    string month;
    cout << "Enter the month : ";
    cin >> month;

    cout << getDaysInMonth(month);

    return 0;
}