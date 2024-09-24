// 25
// User se 4 input lena hai, inka maximum nikalna hai. Agar maximum > 20 hai to ek function call
// karna hai aur check karna hai wo prime hai ya nahi. Agar prime hai to uska double return karna
// hai.

#include <bits/stdc++.h>
using namespace std;

double prime(int num)
{
    if (num < 3)
    {
        cout << "not prime\n";
        return -1;
    }

    for (int i = 3; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "not prime\n";
            return -1;
        }
    }

    // return static_cast<double>(num);
    return double(num);
}

int main()
{
    int a, b, c, d;
    cout << "Enter four numbers : \n";
    cin >> a >> b >> c >> d;

    int maxx = a;

    if (maxx < b)
        maxx = b;
    if (maxx < c)
        maxx = c;
    if (maxx < d)
        maxx = d;

    cout << maxx << endl;

    if (maxx > 20)
    {
        if (prime(maxx) != -1)
        {
            cout << "prime\n";
            cout << prime(maxx);
        }
    }
    else
    {
        cout << "END";
    }
    return 0;
}