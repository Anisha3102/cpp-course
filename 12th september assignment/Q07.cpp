// 7
//  User se 2 input lena hai, inka product nikalna hai. Agar product < 50 hota hai to ek function
//  call karna hai, jisme product aur ek user input ko add karna hai aur result ko return karna hai.
//  Agar returned value odd hai to ek aur function call karke us value ko square karna hai aur result
//  return karna hai.

#include <bits/stdc++.h>
using namespace std;

int square(int sum)
{
    return sum * sum;
}

int addinput(int num1)
{
    int num2;
    cout << "Enter another number ";
    cin >> num2;
    int sum = num1 + num2;

    return sum;
}

int main()
{
    int a, b;
    cout << "Enter two integers : ";
    cin >> a >> b;

    int prod = a * b;

    if (prod < 50)
    {
        cout << "Add function is called\n";
        int add = addinput(prod);
        cout << add << endl;
        if (add % 2 != 0)
        {
            cout << "Square function is called\n";
            cout << square(add);
        }
        else
        {
            cout << "end";
        }
    }
    else
    {
        cout << "end";
    }

    return 0;
}

