// 6.if agar user ne input kiya hai
//   1 then ek function call karna hai A() ===> A is printed uske andar ek aur function call karna hai and call function D() and "print I am D"
//   2 then ek function call karna hai B() ===> B is printed 

// and call function E() and "print I am E"
//   3 then ek function call karna hai C() ===> C is printed 

// and call function F() and "print I am F"


#include <bits/stdc++.h>
using namespace std;

void D()
{
    cout << "I am D";
}

void E()
{
    cout << "I am E";
}

void F()
{
    cout << "I am F";
}
void A()
{
    cout << "A is printed" << endl;
    D();
}

void B()
{
    cout << "B is printed" << endl;
    E();
}

void C()
{
    cout << "C" << endl;
    F();
}

void call(int k)
{
    if (k == 1)
    {
        A();
    }
    else if (k == 2)
    {
        B();
    }
    else if (k == 3)
    {
        C();
    }
    else
    {
        cout << "INVALID INPUT";
    }
}

int main()
{
    int k;

    cout << "Enter a number : ";
    cin >> k;

    call(k);

    return 0;
}


