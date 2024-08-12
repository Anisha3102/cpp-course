// Write a C++ function that takes the lengths of three sides of a triangle as input and uses nested if-else statements to determine if the triangle is a right triangle, isosceles right triangle, or neither.

#include <bits/stdc++.h>
using namespace std;

string triangle(float a, float b, float c)
{
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        if (a == b || b == c || a == c)
        {
            return "Isosceles right triangle";
        }
        else
        {
            return "Right triangle";
        }
    }
    else
    {
        return "Not a Right triangle";
    }
}

int main()
{
    float a, b, c;
    cout << "Enter the sides of triangle : ";
    cin >> a >> b >> c;

    cout << triangle(a, b, c);

    return 0;
}