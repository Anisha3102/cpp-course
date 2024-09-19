//10
// User se 5 input lena hai, inka average nikalna hai. Agar average > 60 hai to ek function call 
// karna hai, jisme 3 input lena hai aur unka product return karna hai. Agar product even hai to
// uska half return karna hai, agar odd hai to uska double return karna hai.


#include<bits/stdc++.h>
using namespace std;

int multi(int a){
     cout<<"double of product is :";
    int multiply=2*a;
    return multiply;
}

double half(int a){
    cout<<"half of product is :";
    int divide=a/2;
    return divide;
}

int product(){
    
     int a,b,c;
    cout<<"Enter 3 numbers\n";
    cin>>a>>b>>c;
    
    int prod=a*b*c;
    
    return prod;

}

int main(){
    int a,b,c,d,e;
    cout<<"Enter five numbers\n";
    cin>>a>>b>>c>>d>>e;
    
    int avg=(a+b+c+d+e)/5;
    
    if(avg>60){
        cout<<"Product function is called\n";
        int p=product();
        cout<<p<<endl;
        if(p%2==0){
            cout<<"Half function is called\n";
            cout<<half(p);
        }
        else{
            cout<<"Double function is called\n";
            cout<<multi(p);
        }
       
    }
    else{
        cout<<"END";
    }
    return 0;
}

