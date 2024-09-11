#include<bits/stdc++.h>
using namespace std;
void A();
void B();
void C();
void D();
void E();

void A()
{
    cout<<"A is called\n";
    B();
}
void B()
{
    cout<<"B is called\n";
}
void C()
{
    cout<<"C is called\n";
}
void D()
{
    cout<<"D is called\n";
}
void E()
{
    cout<<"E is called\n";
}
int main()
{
    cout<<"Hello starts from main\n";
    A();
    C();
    cout<<"Bye from main\n";
}