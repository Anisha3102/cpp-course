//Q9
// Create an overloaded findAverage function that calculates the average of two integers,
// three integers, and four integers. Write a program to test the overloaded functions.
 
#include <bits/stdc++.h>
using namespace std;

int minu(int a,int b){
    return (a+b)/2;
}

int minu(int a,int b,int c){
    return (a+b+c)/3;
}

int minu(int a,int b,int c,int d){
    return (a+b+c+d)/4;
}

int main()
{
    
    int a,b;
    cout<<"enter two integers\n";
    cin>>a>>b;
    int c,d,e;
    cout<<"enter three integers\n";
    cin>>c>>d>>e;
    cout<<"enter four integers\n";
    int f,g,h,i;
    cin>>f>>g>>h>>i;
    
    cout<<minu(a,b)<<endl;
    cout<<minu(c,d,e)<<endl;
    cout<<minu(f,g,h,i);

    return 0;
}

