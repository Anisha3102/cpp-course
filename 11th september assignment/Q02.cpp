// 2. mujhe user se ek string input mai lena hai agr wo mon-sat weekday sun holiday invalid day


#include <bits/stdc++.h>
using namespace std;

string WeekDaysOrWeekend(string day)
{    
    transform(day.begin(), day.end(), day.begin(), ::tolower);
    
    if (day == "sunday")
    {
        return "Weekend";
    }
    else if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday")
    {
        return "Week Days";
    }
    else{
        return "invalid input";
    }
}

int main()
{
    string day;
    cout << "Enter Day : ";
    cin >> day;

    cout << WeekDaysOrWeekend(day);

    return 0;
}

