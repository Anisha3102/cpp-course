//Q01
//Define an overloaded function add that adds two integers, two floats, and concatenates two strings. Write a program to demonstrate the //working of all overloaded functions.: Use different parameter types for overloading.

#include <bits/stdc++.h>
using namespace std;

int calc(int a,int b){
    return a+b;
}

float calc(float a,float b){
    return a+b;
}

string calc(string a,string b){
    return a+b;
}

int main()
{
    
    int a,b;
    cout<<"enter two integers\n";
    cin>>a>>b;
    float c,d;
    cout<<"enter two decimal number\n";
    cin>>c>>d;
    cout<<"enter two strings\n";
    string e,f;
    cin>>e>>f;
    
    cout<<calc(a,b)<<endl;
    cout<<calc(c,d)<<endl;
    cout<<calc(e,f);

    return 0;
}


