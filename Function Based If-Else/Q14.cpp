// Q14
// Write a C++ function that takes the age of a person as an argument and uses logical operators to return their category ("Child", "Teenager", "Adult", "Senior").

#include <bits/stdc++.h>
using namespace std;

string ageCategory(int age)
{
    if (age >= 1 && age < 13)
    {
        return "child";
    }
    else if (age >= 13 && age < 20)
    {
        return "teenager";
    }
    else if (age >= 20 && age < 60)
    {
        return "Adult";
    }
    else
    {
        return "Senior";
    }
}

int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;

    cout << ageCategory(k);

    return 0;
}