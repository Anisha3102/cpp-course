//Q8
// Write a program that demonstrates function overloading by creating overloaded functions for
// subtract that subtract two integers, two floats, and two long integers.
 
#include <bits/stdc++.h>
using namespace std;

int minu(int a,int b){
    return a-b;
}

float minu(float a,float b){
    return a-b;
}

long minu(long a,long b){
    return a-b;
}

int main()
{
    
    int a,b;
    cout<<"enter two integers\n";
    cin>>a>>b;
    float c,d;
    cout<<"enter two decimal number\n";
    cin>>c>>d;
    cout<<"enter two characters\n";
    long e,f;
    cin>>e>>f;
    
    cout<<minu(a,b)<<endl;
    cout<<minu(c,d)<<endl;
    cout<<minu(e,f);

    return 0;
}




