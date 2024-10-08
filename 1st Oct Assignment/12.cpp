//Q12
// Implement overloaded functions isEqual to check if two integers are equal, two characters are
// equal, and two floating-point numbers are equal (with precision tolerance).


#include <bits/stdc++.h>
using namespace std;
void equal(int a,int b){
    if(a==b){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
}

void equal(float a,float b){
     if(a==b){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
}

void equal(char a,char b){
     if(a==b){
         cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
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
    
    equal(a,b);
    equal(c,d);
    equal(e,f);

    return 0;
}

