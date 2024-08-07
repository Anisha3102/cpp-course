#include <bits/stdc++.h>
using namespace std;

void F()
{
    cout << "F started\n";
    cout << "F ended\n";
}

void E()
{
    cout << "E started\n";
    cout << "E ended\n";
}

void D()
{
    cout << "D started\n";
    cout << "D ended\n";
}

void C()
{
    cout << "C started\n";
    D();
    E();
    F();
    cout << "C ended\n";
}

void B()
{
    cout << "B started\n";
    C();
    cout << "B ended\n";
}

void A()
{
    cout << "A started\n";
    B();
    cout << "A ended\n";
}

int main()
{
    cout << "Main started\n";
    A();
    cout << "Main ended\n";

    return 0;
}
