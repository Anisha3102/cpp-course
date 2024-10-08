//Q11
//  Overload the absolute function to return the absolute value of an integer, a float, and 
//  a double. Write a program to test all the overloaded versions.


#include <bits/stdc++.h>
using namespace std;

int abso(int a){
    return abs(a);
}

float abso(float a){
    return abs(a);
}

double abso(double a){
    return abs(a);
}

int main()
{
    
    int a;
    cout<<"enter one integer\n";
    cin>>a;
    float b;
    cout<<"enter one decimal number\n";
    cin>>b;
    cout<<"enter a double\n";
    double c;
    cin>>c;
    
    cout<<abso(a)<<endl;
    cout<<abso(b)<<endl;
    cout<<abso(c);

    return 0;
}
