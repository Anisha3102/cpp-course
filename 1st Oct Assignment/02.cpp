//Q02
// Create a function calculateArea that is overloaded to compute the area of a circle, rectangle, and triangle. Use appropriate arguments //to represent each shape’s dimensions.

#include <bits/stdc++.h>
using namespace std;

int CalculateArea(int a,int b){
    return a*b;
}

float CalculateArea(float a){
    return 3.14*a*a;
}

float CalculateArea(float a,float b){
    return 1/2*a*b;
}

int main()
{
    
    int a,b;
    cout<<"enter sides of rectangle\n";
    cin>>a>>b;
    float c;
    cout<<" radius of circle\n";
    cin>>c;
    cout<<"enter base and height of triangle\n";
    float e,f;
    cin>>e>>f;
    
    cout<<CalculateArea(a,b)<<endl;
    cout<<CalculateArea(c)<<endl;
    cout<<CalculateArea(e,f);

    return 0;
}


