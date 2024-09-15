// 9. user se 4 input lena hai un ka product nikalna hai agar wo product even hota hai to fir ek
// function call karna hai aur usme A is printed likhna hai. agar wo product odd hota hai to fir ek dusra
// function call hoga aur usme B is printed.


#include <bits/stdc++.h>
using namespace std;

void A()
{
    cout << "A is printed";
}

void B()
{
    cout << "B is printed";
}

void checkEvenOdd(int n)
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            A();
        }
        else
        {
            B();
        }
    }
    else
    {
        cout << "Neither even nor odd";
    }
}

void product(int a, int b, int c, int d)
{
    int prod = a * b * c * d;

    cout << prod << endl;

    checkEvenOdd(prod);
}

int main()
{
    int a, b, c, d;

    cout << "Enter 4 Numbers" << endl;
    cin >> a >> b >> c >> d;

    product(a, b, c, d);

    return 0;
}

