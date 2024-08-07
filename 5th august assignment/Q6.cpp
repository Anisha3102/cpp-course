// Q6...
// swap the values of a and b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers A and B respectively : ";
    cin >> a >> b;

    int c;
    c = a;
    a = b;
    b = c;

    cout << "After swap, A = " << a << " and B = " << b;

    return 0;
}

