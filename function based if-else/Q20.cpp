// Q20

// Implement a C++ function that takes a day of the week as an argument and returns whether it's a weekday or a weekend day using if-else statements.



#include <bits/stdc++.h>
using namespace std;

string WeekDaysOrWeekend(char *day)
{
    if (day == "saturday" || day == "sunday")
    {
        return "Weekend";
    }
    else
    {
        return "Week Days";
    }
}

int main()
{
    char day[8];
    cout << "Enter Day : ";
    cin >> day;

    cout << WeekDaysOrWeekend(day);

    return 0;
}
