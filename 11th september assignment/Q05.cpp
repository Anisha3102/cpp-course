// 5.agar user ki age 0-5 "child" 6-12 "young age" 13-19 "teenage" 20-50 "middle age" greater than 51 "senior citizen"

#include <bits/stdc++.h>
using namespace std;

void checkAge(int age)
{
    if (age >= 0 && age <= 5)
    {
        cout << "child";
    }
    else if (age >= 6 && age <= 12)
    {
        cout << "young age";
    }
    else if (age >= 13 && age <= 19)
    {
        cout << "teenage";
    }
    else if (age >= 20 && age <= 50)
    {
        cout << "middle age";
    }
    else if (age >= 51)
    {
        cout << "Senior citizen";
    }
    else
    {
        "INVALID INPUT";
    }
}

int main()
{
    int age;

    cout << "Enter age : ";
    cin >> age;

    checkAge(age);

    return 0;
}

