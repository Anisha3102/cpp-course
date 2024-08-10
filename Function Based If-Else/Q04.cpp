// Q4
// Develop a C++ function that takes three angles as arguments and returns whether the triangle is acute, obtuse, or right-angled using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string Triangle(float a, float b, float c)
{
    if (a == 90 || b == 90 || c == 90)
    {
        return "Right Angle Triangle";
    }
    else if (a > 90 || b > 90 || c > 90)
    {
        return "Obtuse Angle Triangle";
    }
    else
    {
        return "Acute Angle Triangle";
    }
}

int main()
{
    float a, b, c;
    cout << "Enter angles of Triangle : ";
    cin >> a >> b >> c;

    cout << Triangle(a, b, c);

    return 0;
}

