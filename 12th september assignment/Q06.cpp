// 6.
// User se 4 input lena hai, inka sum nikalna hai. Agar sum > 100 hota hai to ek function call
// karna hai, jisme 3 input lena hai aur unka average return karna hai. Agar returned average >
// 50 hai to ek aur function call karke factorial nikalna hai aur check karna hai wo prime number
// hai ya nahi.

#include <bits/stdc++.h>
using namespace std;

void factorial()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact << endl;

    if (fact < 3)
    {
        cout << "invalid input";
    }
    for (int i = 3; i < fact; i++)
    {
        if (fact % i == 0)
        {
            cout << "not prime";
            return;
        }
    }
    cout << "prime";
}

void average()
{
    int a, b, c;
    cout << "Enter three numbers\n";
    cin >> a >> b >> c;

    float avg = (a + b + c) / 3;

    if (avg > 50)
    {
        cout << "factorial function is called\n";
        factorial();
    }
}

int main()
{
    int a, b, c, d;
    cout << "Enter four numbers ";
    cin >> a >> b >> c >> d;

    int sum = a + b + c + d;

    if (sum > 100)
    {
        cout << "average function is called\n";
        average();
    }

    else
    {
        cout << "end";
    }

    return 0;
}

