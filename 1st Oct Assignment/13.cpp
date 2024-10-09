//Q13
// Define an overloaded function minValue that returns the minimum of two integers, two floats, 
// and two double values. Test the program with different inputs.

#include <bits/stdc++.h>
using namespace std;

int mini(int a,int b){
    return min(a,b);
}

float maxi(float a,float b){
    return min(a,b);
}

double mini(double a,double b){
    return min(a,b);
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
    double e,f;
    cin>>e>>f;
    
    cout<<mini(a,b)<<endl;
    cout<<mini(c,d)<<endl;
    cout<<mini(e,f);

    return 0;
}


