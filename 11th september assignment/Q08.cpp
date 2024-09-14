// 8. User se 3 input lena hai, un calculate karna hai sum nikalna hai
//     if agar wo sum even hota hai print karna hai even, odd hota hai to print karna hai odd


#include <bits/stdc++.h>
using namespace std;

void checkEvenOdd(int n)
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "Even";
        }
        else
        {
            cout << "Odd";
        }
    }
    else
    {
        cout << "Neither even nor odd";
    }
}

void add(int a, int b, int c)
{
    int sum = a + b + c;

    cout << sum << endl;

    checkEvenOdd(sum);
}

int main()
{
    int a, b, c;

    cout << "Enter 3 Numbers" << endl;
    cin >> a >> b >> c;

    add(a, b, c);

    return 0;
}


