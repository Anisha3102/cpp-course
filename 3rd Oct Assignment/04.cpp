//Q4
//Implement an overloaded function print that prints an integer, a float, and a string.
//  Write a program to test it with different data types.


#include <bits/stdc++.h>
using namespace std;

int maxi(int a){
    return a;
}

float maxi(float a){
    return a;
}

string maxi(string a){
    return a;
}

int main()
{
    
    int a;
    cout<<"enter one integer\n";
    cin>>a;
    float b;
    cout<<"enter one decimal number\n";
    cin>>b;
    cout<<"enter a strings\n";
    string c;
    cin>>c;
    
    cout<<maxi(a)<<endl;
    cout<<maxi(b)<<endl;
    cout<<maxi(c);

    return 0;
}



