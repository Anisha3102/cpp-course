//Q17
// Write a program to overload the printSquare function that prints the square of an integer,
// a float, and a double value.

#include <bits/stdc++.h>
using namespace std;

int ps(int a){
    return (a*a);
}

float ps(float a){
   return (a*a);
}

double ps(double a){
    return (a*a);
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
    
    cout<<ps(a)<<endl;
    cout<<ps(b)<<endl;
    cout<<ps(c);

    return 0;
}


