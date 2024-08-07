// Q4...
// subtraction of a and b and if subtraction is negative then use a formula to make it positive .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers : ";
    cin >> a >> b;

    int sub = a - b;
    cout << abs(sub);

    return 0;
}
