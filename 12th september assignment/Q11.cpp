// 11
// User se 4 input lena hai, inka minimum nikalna hai. Agar minimum < 10 hai to ek function call karna 
// hai aur minimum ko 5 se multiply karna hai aur result return karna hai. Agar minimum > 50 hai to
// factorial nikalna hai aur result return karna hai.

#include<bits/stdc++.h>
using namespace std;

unsigned int factorial(unsigned int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int multi(int minimum){
    return minimum*5;
}

int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers\n";
    cin>>a>>b>>c>>d;
    
    int minimum=a;
    
    if(minimum>b){
        minimum=b;
    }
    
     if(minimum>c){
        minimum=c;
    }
    
     if(minimum>d){
        minimum=d;
    }
    
    if(minimum < 10){
        cout<<"Multiplication function is called\n";
        cout<<multi(minimum);
    }
    
    else if(minimum>50){
        cout<<"Factorial function is called\n";
        cout<<factorial(minimum);
    }
    
    else {
        cout<<"END\n";
    }

}
    
