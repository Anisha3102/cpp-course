// Q-4
// Develop a C++ function that takes three sides of a triangle as arguments and returns whether the triangle is equilateral, isosceles, or scalene using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string triangleType(int a, int b, int c)
{
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            return "Equilateral Triangle";
        }
        else if (a == b || b == c || c == a)
        {
            return "Isosceles Triangle";
        }
        else
        {
            return "Scalene Triangle";
        }
    }
    else
    {
        return "INVALID";
    }
}

int main()
{
    int x, y, z;
    cout << "Enter the sides of triangle : ";
    cin >> x >> y >> z;

    cout << triangleType(x, y, z);

    return 0;
}