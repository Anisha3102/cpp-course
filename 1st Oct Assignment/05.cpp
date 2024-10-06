//Q5
// Create an overloaded function multiply that multiplies two integers, two floats, and an
// integer with a float. Write a test program to verify the result of all overloaded functions..


#include <bits/stdc++.h>
using namespace std;

int multi(int a,int b){
    return a*b;
}

float multi(float a,float b){
    return a*b;
}

float multi(int a,float b){
    return a*b;
}

int main()
{
    
    int a,b;
    cout<<"enter two integer\n";
    cin>>a>>b;
    float c,d;
    cout<<"enter two decimal number\n";
    cin>>c>>d;
    cout<<"enter a float and integer\n";
    int e;
    float f;
    cin>>e;
    cin>>f;
    
    cout<<multi(a,b)<<endl;
    cout<<multi(c,d)<<endl;
    cout<<multi(e,f);

    return 0;
}


