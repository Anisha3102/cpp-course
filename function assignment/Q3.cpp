#include <bits/stdc++.h>
using namespace std;

void I()
{
    cout << "I started\n";
    cout << "I ended\n";
}

void H()
{
    cout << "H started\n";
    cout << "H ended\n";
}

void G()
{
    cout << "G started\n";
    cout << "G ended\n";
}

void F()
{
    cout << "F started\n";
    G();
    H();
    I();
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
    F();
    cout << "D ended\n";
}

void C()
{
    cout << "C started\n";
    cout << "C ended\n";
}

void B()
{
    cout << "B started\n";
    C();
    D();
    E();
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

