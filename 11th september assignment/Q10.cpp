// 10.user se 3 input lena hai, unka sum nikalna hai ab agar wo sum even hota hai then last 3 input mai se jo max
// tha uska answer batana hai Aur agar sum odd hai fir un tino number ka product(multiplication) nikalna hai


#include <bits/stdc++.h>
using namespace std;

void checkEvenOdd(int n, int a, int b, int c)
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << max(max(a, b), c);
        }
        else
        {
            cout << a * b * c;
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

    checkEvenOdd(sum, a, b, c);
}

int main()
{
    int a, b, c;

    cout << "Enter 3 Numbers" << endl;
    cin >> a >> b >> c;

    add(a, b, c);

    return 0;
}









