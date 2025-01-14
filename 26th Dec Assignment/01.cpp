#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
    if(n==-1)
        return;
    cout<<n<<" ";
    func(n-1);
    cout<<n<<"\n";
}
int main()
{
    int n=5;
    func(n);
   
}