// Q03
// Overload a max function to return the maximum of two integers, two floats, and two strings 



#include <bits/stdc++.h>
using namespace std;

int maxi(int a,int b){
    return max(a,b);
}

float maxi(float a,float b){
    return max(a,b);
}

string maxi(string a,string b){
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
    cout<<"enter two strings\n";
    string e,f;
    cin>>e>>f;
    
    cout<<maxi(a,b)<<endl;
    cout<<maxi(c,d)<<endl;
    cout<<maxi(e,f);

    return 0;
}

