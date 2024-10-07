//Q7
//  Define a function compare that is overloaded to compare two integers, two floats, and two 
//  characters, returning the greater value in each case. Test the overloaded functions with
//  appropriate examples.
 
#include <bits/stdc++.h>
using namespace std;

int maxi(int a,int b){
    return max(a,b);
}

float maxi(float a,float b){
    return max(a,b);
}

char maxi(char a,char b){
    return max(a,b);
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
    char e,f;
    cin>>e>>f;
    
    cout<<maxi(a,b)<<endl;
    cout<<maxi(c,d)<<endl;
    cout<<maxi(e,f);

    return 0;
}
