// Q-25
// Write a C++ function that takes a person's age as an argument and returns their life stage (infant, toddler, child, adolescent, adult, senior) using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string ageCategory(int age)
{
    if (age >= 0 && age <= 1)
    {
        return "Infant";
    }
    else if (age >= 2 && age <= 4)
    {
        return "Toddler";
    }
    else if (age >= 5 && age <= 11)
    {
        return "Kid";
    }
    else if (age >= 12 && age <= 17)
    {
        return "Adolescent";
    }
    else if (age >= 18 && age <= 60)
    {
        return "Adult";
    }
    else if (age > 60)
    {
        return "senior";
    }
    else
    {
        return "INVALID AGE";
    }
}

int main()
{
    int k;
    cout << "Enter the Age : ";
    cin >> k;

    cout << ageCategory(k);

    return 0;
}