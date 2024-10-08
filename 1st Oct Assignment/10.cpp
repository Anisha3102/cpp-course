//Q10
//  Overload the power function to compute the power of an integer raised to another integer,
//  a float raised to an integer, and an integer raised to a float.
 
 
#include <bits/stdc++.h>
using namespace std;

int same(int a,int b){
     return pow(a,b);
}

float same(float a,int b){
    return pow(a,b);
}

float same(int a,float b){
    return pow(a,b);
}

int main()
{
    
     int a,b,e,f;
     float c,d;
     
    cout<<"enter two integers\n";
    cin>>a>>b;
    
    cout<<"enter one float and an integer\n";
    cin>>c>>d; 
    
    cout<<"enter one integer and a float \n";
     cin>>e>>f;
    
    cout<<same(a,b)<<endl;
    cout<<same(c,e)<<endl;
    cout<<same(f,d);

    return 0;
}


