// Q5...
// calculate the average of 5 numbers.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3, x4, x5;

    cout << "Enter 5 Numbers : ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    float avg = (x1 + x2 + x3 + x4 + x5) / 5;
    cout << "Average = " << avg;

    return 0;
}
