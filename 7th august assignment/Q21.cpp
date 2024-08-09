// Q-21
// Implement a C++ function that takes a day of the month as an argument and returns the corresponding zodiac sign using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string getZodiacSign(int day, int month)
{
    string zodiacSign;

    if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
    {
        zodiacSign = "Aquarius";
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
    {
        zodiacSign = "Pisces";
    }
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
    {
        zodiacSign = "Aries";
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
    {
        zodiacSign = "Taurus";
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
    {
        zodiacSign = "Gemini";
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
    {
        zodiacSign = "Cancer";
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
    {
        zodiacSign = "Leo";
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
    {
        zodiacSign = "Virgo";
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
    {
        zodiacSign = "Libra";
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
    {
        zodiacSign = "Scorpio";
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
    {
        zodiacSign = "Sagittarius";
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
    {
        zodiacSign = "Capricorn";
    }
    else
    {
        zodiacSign = "Invalid date";
    }

    return zodiacSign;
}

int main()
{
    int day, month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    string sign = getZodiacSign(day, month);
    cout << "The zodiac sign is: " << sign << endl;

    return 0;
}
