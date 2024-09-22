// 19
// User se 2 input lena hai, inka maximum nikalna hai. Agar maximum > 30 hai to ek function call
// karna hai aur check karna hai wo prime hai ya nahi. Agar prime hai to factorial return karna
// hai.

#include <bits/stdc++.h>
using namespace std;

void prime(int num)
{
    if (num < 3)
    {
        cout << "not prime\n";
        return;
    }

    for (int i = 3; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "not prime\n";
            return;
        }
    }

    cout << "prime\n";

    cout << "factorial function is called\n";
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact;
}

int main()
{
    int a, b;
    cout << "Enter two numbers : \n";
    cin >> a >> b;

    int maximum = max(a, b);

    if (maximum > 30)
    {
        cout << "prime function is called\n";
        prime(maximum);
    }

    else
    {
        cout << "END";
    }

    return 0;
}